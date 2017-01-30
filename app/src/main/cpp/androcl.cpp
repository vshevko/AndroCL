#include <jni.h>
#include <string>
#include <android/bitmap.h>

#include "imgprocessor.h"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/core/ocl.hpp>


using namespace std;
using namespace cv;

extern "C"
jint
Java_com_example_linuxdev_myapplication_MainActivity_runOpenCL(JNIEnv* env, jclass clazz, jobject bitmapIn, jobject bitmapOut, jintArray info)
{

    void*	bi;
    void*   bo;

    jint* i = env->GetIntArrayElements(info, NULL);

    AndroidBitmap_lockPixels(env, bitmapIn, &bi);
    AndroidBitmap_lockPixels(env, bitmapOut, &bo);

    openCLNR((unsigned char *)bi, (unsigned char *)bo, (int *)i);

    AndroidBitmap_unlockPixels(env, bitmapIn);
    AndroidBitmap_unlockPixels(env, bitmapOut);
    env->ReleaseIntArrayElements(info, i, 0);

    return 0;
}


extern "C"
jint
Java_com_example_linuxdev_myapplication_MainActivity_runNativeC(JNIEnv* env, jclass clazz, jobject bitmapIn, jobject bitmapOut, jintArray info)
{
    void*	bi;
    void*   bo;

    jint* i = env->GetIntArrayElements(info, NULL);

    AndroidBitmap_lockPixels(env, bitmapIn, &bi);
    AndroidBitmap_lockPixels(env, bitmapOut, &bo);

    refNR((unsigned char *)bi, (unsigned char *)bo, (int *)i);

    AndroidBitmap_unlockPixels(env, bitmapIn);
    AndroidBitmap_unlockPixels(env, bitmapOut);
    env->ReleaseIntArrayElements(info, i, 0);

    return 0;
}




extern "C"
jint
Java_com_example_linuxdev_myapplication_MainActivity_runNativeCORB(JNIEnv* env, jclass clazz, jlong matInAddr, jlong matOutAddr, jintArray info)
{

    jint* i = env->GetIntArrayElements(info, NULL);

    clock_t startTimer, stopTimer;

    vector<KeyPoint> kpts;
    UMat desc;
    Mat &imgIn = *(Mat *) matInAddr;
    Mat &imgOut = *(Mat *) matOutAddr;
    UMat u_imgIn;
    cv::ocl::setUseOpenCL(true);
    // Convert it to oclMat
    imgIn.copyTo(u_imgIn);

    Ptr<ORB> orb = ORB::create();
    startTimer=clock();
    orb->detectAndCompute(u_imgIn, noArray(), kpts, desc);
    stopTimer = clock();
    for (unsigned int j = 0; j < kpts.size(); j++) {
        const KeyPoint& kp = kpts[j];
        circle(imgOut, Point(kp.pt.x, kp.pt.y), 10, Scalar(255,0,0,255));
    }

    double elapse = 1000.0* (double)(stopTimer - startTimer)/(double)CLOCKS_PER_SEC;
    i[2] = (int)elapse;

    LOGI("C++ code on the CPU took %g ms\n\n", 1000.0* (double)(stopTimer - startTimer)/(double)CLOCKS_PER_SEC) ;

    env->ReleaseIntArrayElements(info, i, 0);

    return 0;
}