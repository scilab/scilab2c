function allLibraries = getAllLibraries(SharedInfo)
  Target = SharedInfo.Target;
  //Library files required for "RasberryPi" target
  RPi_libs = [
      "src/c/hardware/rasberrypi/libraries/wiringPi/libwiringPi.so"
      "src/c/hardware/rasberrypi/libraries/libcblas.a"
      "src/c/hardware/rasberrypi/libraries/librefblas.a"
      "src/c/hardware/rasberrypi/libraries/liblapack.a"
      "src/c/hardware/rasberrypi/libraries/libgfortran.a"
      "src/c/hardware/rasberrypi/libraries/libgsl.a"
		];

  RPi_cvlibs = [
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_calib3d.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_contrib.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_core.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_features2d.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_flann.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_gpu.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_highgui.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_imgproc.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_legacy.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_ml.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_nonfree.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_objdetect.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_ocl.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_photo.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_stitching.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_superres.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_video.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_videostab.a"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_ts.a"
      "src/c/hardware/rasberrypi/libraries/libjpeg.a"
      "src/c/hardware/rasberrypi/libraries/libjasper.a"
      "src/c/hardware/rasberrypi/libraries/libpng.a"
      "src/c/hardware/rasberrypi/libraries/libIlmImf.a"
      "src/c/hardware/rasberrypi/libraries/libzlib.a"
      "src/c/hardware/rasberrypi/libraries/libtiff.a"
];  

  if Target == "RPi"
    allLibraries = RPi_libs;
    if (SharedInfo.OpenCVUsed == %T)
      allLibraries = cat(1,allLibraries,RPi_cvlibs)  
    end
  
  else
  allLibraries = [];
  end

endfunction
