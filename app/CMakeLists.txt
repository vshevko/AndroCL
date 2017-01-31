cmake_minimum_required(VERSION 3.4.1)
set(CMAKE_VERBOSE_MAKEFILE on)

include_directories(src/main/cpp/include)

include_directories(${ANDROID_NDK}/sources/android/native_app_glue)
add_library(app-glue STATIC ${ANDROID_NDK}/sources/android/native_app_glue/android_native_app_glue.c)

add_library( # Lib Name.
             androcl

             # Shared.
             SHARED

             # src list
             src/main/cpp/androcl.cpp
             src/main/cpp/imgprocessor.cpp

        src/main/cpp/include/converters.cpp
        src/main/cpp/include/utils.cpp
        src/main/cpp/include/Mat.cpp
        src/main/cpp/include/jni_part.cpp
        src/main/cpp/include/core.cpp
        src/main/cpp/include/features2d.cpp

     src/main/cpp/opencv2/calib3d/src/epnp.cpp
     src/main/cpp/opencv2/calib3d/src/upnp.cpp
     src/main/cpp/opencv2/calib3d/src/posit.cpp
     src/main/cpp/opencv2/calib3d/src/stereobm.cpp
     src/main/cpp/opencv2/calib3d/src/checkchessboard.cpp
     src/main/cpp/opencv2/calib3d/src/solvepnp.cpp
     src/main/cpp/opencv2/calib3d/src/main.cpp
     src/main/cpp/opencv2/calib3d/src/levmarq.cpp
     src/main/cpp/opencv2/calib3d/src/five-point.cpp
     src/main/cpp/opencv2/calib3d/src/triangulate.cpp
     src/main/cpp/opencv2/calib3d/src/homography_decomp.cpp
     src/main/cpp/opencv2/calib3d/src/polynom_solver.cpp
     src/main/cpp/opencv2/calib3d/src/compat_ptsetreg.cpp
     src/main/cpp/opencv2/calib3d/src/circlesgrid.cpp
     src/main/cpp/opencv2/calib3d/src/calibinit.cpp
     src/main/cpp/opencv2/calib3d/src/p3p.cpp
     src/main/cpp/opencv2/calib3d/src/dls.cpp
     src/main/cpp/opencv2/calib3d/src/compat_stereo.cpp
     src/main/cpp/opencv2/calib3d/src/quadsubpix.cpp
     src/main/cpp/opencv2/calib3d/src/rho.cpp
     src/main/cpp/opencv2/calib3d/src/ptsetreg.cpp
     src/main/cpp/opencv2/calib3d/src/stereosgbm.cpp
     src/main/cpp/opencv2/calib3d/src/fisheye.cpp
     src/main/cpp/opencv2/calib3d/src/fundam.cpp
     src/main/cpp/opencv2/calib3d/src/calibration.cpp
     src/main/cpp/opencv2/calib3d/src/opencl_kernels_calib3d.cpp

     src/main/cpp/opencv2/flann/src/flann.cpp
     src/main/cpp/opencv2/flann/src/miniflann.cpp

     src/main/cpp/opencv2/imgproc/src/deriv.cpp
     src/main/cpp/opencv2/imgproc/src/imgwarp.cpp
     src/main/cpp/opencv2/imgproc/src/pyramids.cpp
     src/main/cpp/opencv2/imgproc/src/sumpixels.cpp
     src/main/cpp/opencv2/imgproc/src/intersection.cpp
     src/main/cpp/opencv2/imgproc/src/utils.cpp
     src/main/cpp/opencv2/imgproc/src/drawing.cpp
     src/main/cpp/opencv2/imgproc/src/demosaicing.cpp
     src/main/cpp/opencv2/imgproc/src/histogram.cpp
     src/main/cpp/opencv2/imgproc/src/phasecorr.cpp
     src/main/cpp/opencv2/imgproc/src/filter.cpp
     src/main/cpp/opencv2/imgproc/src/blend.cpp
     src/main/cpp/opencv2/imgproc/src/colormap.cpp
     src/main/cpp/opencv2/imgproc/src/smooth.cpp
     src/main/cpp/opencv2/imgproc/src/color.cpp
     src/main/cpp/opencv2/imgproc/src/main.cpp
     src/main/cpp/opencv2/imgproc/src/distransform.cpp
     src/main/cpp/opencv2/imgproc/src/featureselect.cpp
     src/main/cpp/opencv2/imgproc/src/convhull.cpp
     src/main/cpp/opencv2/imgproc/src/spatialgradient.cpp
     src/main/cpp/opencv2/imgproc/src/matchcontours.cpp
     src/main/cpp/opencv2/imgproc/src/accum.cpp
     src/main/cpp/opencv2/imgproc/src/lsd.cpp
     src/main/cpp/opencv2/imgproc/src/min_enclosing_triangle.cpp
     src/main/cpp/opencv2/imgproc/src/approx.cpp
     src/main/cpp/opencv2/imgproc/src/emd.cpp
     src/main/cpp/opencv2/imgproc/src/gabor.cpp
     src/main/cpp/opencv2/imgproc/src/cornersubpix.cpp
     src/main/cpp/opencv2/imgproc/src/canny.cpp
     src/main/cpp/opencv2/imgproc/src/corner.cpp
     src/main/cpp/opencv2/imgproc/src/grabcut.cpp
     src/main/cpp/opencv2/imgproc/src/geometry.cpp
     src/main/cpp/opencv2/imgproc/src/undistort.cpp
     src/main/cpp/opencv2/imgproc/src/connectedcomponents.cpp
     src/main/cpp/opencv2/imgproc/src/thresh.cpp
     src/main/cpp/opencv2/imgproc/src/tables.cpp
     src/main/cpp/opencv2/imgproc/src/clahe.cpp
     src/main/cpp/opencv2/imgproc/src/linefit.cpp
     src/main/cpp/opencv2/imgproc/src/contours.cpp
     src/main/cpp/opencv2/imgproc/src/hough.cpp
     src/main/cpp/opencv2/imgproc/src/subdivision2d.cpp
     src/main/cpp/opencv2/imgproc/src/segmentation.cpp
     src/main/cpp/opencv2/imgproc/src/generalized_hough.cpp
     src/main/cpp/opencv2/imgproc/src/rotcalipers.cpp
     src/main/cpp/opencv2/imgproc/src/hershey_fonts.cpp
     src/main/cpp/opencv2/imgproc/src/shapedescr.cpp
     src/main/cpp/opencv2/imgproc/src/samplers.cpp
     src/main/cpp/opencv2/imgproc/src/floodfill.cpp
     src/main/cpp/opencv2/imgproc/src/templmatch.cpp
     src/main/cpp/opencv2/imgproc/src/morph.cpp
     src/main/cpp/opencv2/imgproc/src/moments.cpp
     src/main/cpp/opencv2/imgproc/src/opencl_kernels_imgproc.cpp

     src/main/cpp/opencv2/photo/src/contrast_preserve.cpp
     src/main/cpp/opencv2/photo/src/denoising.cuda.cpp
     src/main/cpp/opencv2/photo/src/hdr_common.cpp
     src/main/cpp/opencv2/photo/src/denoising.cpp
     src/main/cpp/opencv2/photo/src/merge.cpp
     src/main/cpp/opencv2/photo/src/npr.cpp
     src/main/cpp/opencv2/photo/src/align.cpp
     src/main/cpp/opencv2/photo/src/inpaint.cpp
     src/main/cpp/opencv2/photo/src/calibrate.cpp
     src/main/cpp/opencv2/photo/src/seamless_cloning_impl.cpp
     src/main/cpp/opencv2/photo/src/denoise_tvl1.cpp
     src/main/cpp/opencv2/photo/src/tonemap.cpp
     src/main/cpp/opencv2/photo/src/seamless_cloning.cpp
     src/main/cpp/opencv2/photo/src/opencl_kernels_photo.cpp


     src/main/cpp/opencv2/features2d/src/matchers.cpp
     src/main/cpp/opencv2/features2d/src/fast.cpp
     src/main/cpp/opencv2/features2d/src/bagofwords.cpp
     src/main/cpp/opencv2/features2d/src/feature2d.cpp
     src/main/cpp/opencv2/features2d/src/kaze.cpp
     src/main/cpp/opencv2/features2d/src/main.cpp
     src/main/cpp/opencv2/features2d/src/draw.cpp
     src/main/cpp/opencv2/features2d/src/gftt.cpp
     src/main/cpp/opencv2/features2d/src/brisk.cpp
     src/main/cpp/opencv2/features2d/src/blobdetector.cpp
     src/main/cpp/opencv2/features2d/src/kaze/AKAZEFeatures.cpp
     src/main/cpp/opencv2/features2d/src/kaze/nldiffusion_functions.cpp
     src/main/cpp/opencv2/features2d/src/kaze/fed.cpp
     src/main/cpp/opencv2/features2d/src/kaze/KAZEFeatures.cpp
     src/main/cpp/opencv2/features2d/src/keypoint.cpp
     src/main/cpp/opencv2/features2d/src/agast.cpp
     src/main/cpp/opencv2/features2d/src/mser.cpp
     src/main/cpp/opencv2/features2d/src/dynamic.cpp
     src/main/cpp/opencv2/features2d/src/akaze.cpp
     src/main/cpp/opencv2/features2d/src/orb.cpp
     src/main/cpp/opencv2/features2d/src/evaluation.cpp
     src/main/cpp/opencv2/features2d/src/fast_score.cpp
     src/main/cpp/opencv2/features2d/src/agast_score.cpp
     src/main/cpp/opencv2/features2d/src/opencl_kernels_features2d.cpp
     src/main/cpp/opencv2/features2d/misc/java/src/cpp/features2d_converters.cpp

     src/main/cpp/opencv2/video/src/kalman.cpp
     src/main/cpp/opencv2/video/src/ecc.cpp
     src/main/cpp/opencv2/video/src/compat_video.cpp
     src/main/cpp/opencv2/video/src/lkpyramid.cpp
     src/main/cpp/opencv2/video/src/optflowgf.cpp
     src/main/cpp/opencv2/video/src/bgfg_KNN.cpp
     src/main/cpp/opencv2/video/src/tvl1flow.cpp
     src/main/cpp/opencv2/video/src/camshift.cpp
     src/main/cpp/opencv2/video/src/bgfg_gaussmix2.cpp
     src/main/cpp/opencv2/video/src/opencl_kernels_video.cpp


     src/main/cpp/opencv2/shape/src/tps_trans.cpp
     src/main/cpp/opencv2/shape/src/hist_cost.cpp
     src/main/cpp/opencv2/shape/src/sc_dis.cpp
     src/main/cpp/opencv2/shape/src/emdL1.cpp
     src/main/cpp/opencv2/shape/src/aff_trans.cpp
     src/main/cpp/opencv2/shape/src/haus_dis.cpp



     src/main/cpp/opencv2/imgcodecs/src/grfmt_hdr.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_bmp.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_gdcm.cpp
     src/main/cpp/opencv2/imgcodecs/src/utils.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_jpeg2000.cpp
     src/main/cpp/opencv2/imgcodecs/src/loadsave.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_pam.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_exr.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_webp.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_gdal.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_png.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_sunras.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_jpeg.cpp
     src/main/cpp/opencv2/imgcodecs/src/bitstrm.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_pxm.cpp
     src/main/cpp/opencv2/imgcodecs/src/exif.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_tiff.cpp
     src/main/cpp/opencv2/imgcodecs/src/rgbe.cpp
     src/main/cpp/opencv2/imgcodecs/src/grfmt_base.cpp

     src/main/cpp/opencv2/ml/src/ann_mlp.cpp
     src/main/cpp/opencv2/ml/src/tree.cpp
     src/main/cpp/opencv2/ml/src/svm.cpp
     src/main/cpp/opencv2/ml/src/inner_functions.cpp
     src/main/cpp/opencv2/ml/src/testset.cpp
     src/main/cpp/opencv2/ml/src/em.cpp
     src/main/cpp/opencv2/ml/src/boost.cpp
     src/main/cpp/opencv2/ml/src/data.cpp
     src/main/cpp/opencv2/ml/src/nbayes.cpp
     src/main/cpp/opencv2/ml/src/rtrees.cpp
     src/main/cpp/opencv2/ml/src/gbt.cpp
     src/main/cpp/opencv2/ml/src/kdtree.cpp
     src/main/cpp/opencv2/ml/src/lr.cpp
     src/main/cpp/opencv2/ml/src/knearest.cpp
     src/main/cpp/opencv2/ml/src/svmsgd.cpp



     src/main/cpp/opencv2/core/src/matop.cpp
     src/main/cpp/opencv2/core/src/command_line_parser.cpp
     src/main/cpp/opencv2/core/src/conjugate_gradient.cpp
     src/main/cpp/opencv2/core/src/cuda_host_mem.cpp
     src/main/cpp/opencv2/core/src/datastructs.cpp
     src/main/cpp/opencv2/core/src/hal_internal.cpp
     src/main/cpp/opencv2/core/src/glob.cpp
     src/main/cpp/opencv2/core/src/mathfuncs.cpp
     src/main/cpp/opencv2/core/src/arithm.cpp
     src/main/cpp/opencv2/core/src/cuda_gpu_mat.cpp
     src/main/cpp/opencv2/core/src/gl_core_3_1.cpp
     src/main/cpp/opencv2/core/src/persistence.cpp
     src/main/cpp/opencv2/core/src/matmul.cpp
     src/main/cpp/opencv2/core/src/parallel_pthreads.cpp
     src/main/cpp/opencv2/core/src/lapack.cpp
     src/main/cpp/opencv2/core/src/convert.cpp
     src/main/cpp/opencv2/core/src/mathfuncs_core.cpp
     src/main/cpp/opencv2/core/src/dxt.cpp
     src/main/cpp/opencv2/core/src/merge.cpp
     src/main/cpp/opencv2/core/src/alloc.cpp
     src/main/cpp/opencv2/core/src/ocl.cpp
     src/main/cpp/opencv2/core/src/stl.cpp
     src/main/cpp/opencv2/core/src/matrix_decomp.cpp
     src/main/cpp/opencv2/core/src/system.cpp
     src/main/cpp/opencv2/core/src/pca.cpp
     src/main/cpp/opencv2/core/src/va_intel.cpp
     src/main/cpp/opencv2/core/src/lda.cpp
     src/main/cpp/opencv2/core/src/lpsolver.cpp
     src/main/cpp/opencv2/core/src/cuda_info.cpp
     src/main/cpp/opencv2/core/src/opengl.cpp
     src/main/cpp/opencv2/core/src/array.cpp
     src/main/cpp/opencv2/core/src/opencl/runtime/opencl_clamdblas.cpp
     src/main/cpp/opencv2/core/src/opencl/runtime/opencl_core.cpp
     src/main/cpp/opencv2/core/src/opencl/runtime/opencl_clamdfft.cpp
     src/main/cpp/opencv2/core/src/rand.cpp
     src/main/cpp/opencv2/core/src/directx.cpp
     src/main/cpp/opencv2/core/src/downhill_simplex.cpp
     src/main/cpp/opencv2/core/src/algorithm.cpp
     src/main/cpp/opencv2/core/src/matrix.cpp
     src/main/cpp/opencv2/core/src/tables.cpp
     src/main/cpp/opencv2/core/src/out.cpp
     src/main/cpp/opencv2/core/src/cuda_stream.cpp
     src/main/cpp/opencv2/core/src/stat.cpp
     src/main/cpp/opencv2/core/src/umatrix.cpp
     src/main/cpp/opencv2/core/src/copy.cpp
     src/main/cpp/opencv2/core/src/types.cpp
     src/main/cpp/opencv2/core/src/kmeans.cpp
     src/main/cpp/opencv2/core/src/ovx.cpp
     src/main/cpp/opencv2/core/src/parallel.cpp
     src/main/cpp/opencv2/core/src/split.cpp
     src/main/cpp/opencv2/core/src/opencl_kernels_core.cpp
     src/main/cpp/opencv2/core/misc/java/src/cpp/core_manual.cpp


     src/main/cpp/opencv2/objdetect/src/cascadedetect.cpp
     src/main/cpp/opencv2/objdetect/src/main.cpp
     src/main/cpp/opencv2/objdetect/src/detection_based_tracker.cpp
     src/main/cpp/opencv2/objdetect/src/cascadedetect_convert.cpp
     src/main/cpp/opencv2/objdetect/src/haar.cpp
     src/main/cpp/opencv2/objdetect/src/hog.cpp
     src/main/cpp/opencv2/objdetect/src/opencl_kernels_objdetect.cpp




             
             )


add_library( OpenCL SHARED IMPORTED )
set_target_properties(OpenCL PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libOpenCL.so)

#add_library( OpenCV SHARED IMPORTED )
#set_target_properties(OpenCV PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libopencv_java3.so)

find_library( log-lib log )

find_library( jnigraphics-lib jnigraphics )

find_library( opencl-lib OpenCL )
#find_library( opencv-lib OpenCV )

target_link_libraries( androcl ${log-lib} ${jnigraphics-lib} app-glue OpenCL
#OpenCV
)