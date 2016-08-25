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
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_calib3d.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_contrib.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_core.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_features2d.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_flann.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_gpu.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_highgui.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_imgproc.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_legacy.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_ml.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_nonfree.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_objdetect.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_ocl.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_photo.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_stitching.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_superres.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_video.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_videostab.so"
      "src/c/hardware/rasberrypi/libraries/opencv/libopencv_ts.a"
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
