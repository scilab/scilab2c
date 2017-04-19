// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function allLibraries = getAllLibraries(SharedInfo)
// -----------------------------------------------------------------
// Select library files according to target specified
//
// Input data:
//    scilab2c SharedInfo structure
//
// Output data:
//    returns an array containing file paths for libraries
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

  Target = SharedInfo.Target;
  //Library files required for "RasberryPi" target
  RPi_libs = [
      "thirdparty/raspberrypi/lib/libwiringPi.so"
      "thirdparty/raspberrypi/lib/libcblas.a"
      "thirdparty/raspberrypi/lib/librefblas.a"
      "thirdparty/raspberrypi/lib/liblapack.a"
      "thirdparty/raspberrypi/lib/libgfortran.a"
      "thirdparty/raspberrypi/lib/libgsl.a"];

  RPi_cvlibs = [
      "thirdparty/raspberrypi/lib/libopencv_calib3d.a"
      "thirdparty/raspberrypi/lib/libopencv_contrib.a"
      "thirdparty/raspberrypi/lib/libopencv_core.a"
      "thirdparty/raspberrypi/lib/libopencv_features2d.a"
      "thirdparty/raspberrypi/lib/libopencv_flann.a"
      "thirdparty/raspberrypi/lib/libopencv_gpu.a"
      "thirdparty/raspberrypi/lib/libopencv_highgui.a"
      "thirdparty/raspberrypi/lib/libopencv_imgproc.a"
      "thirdparty/raspberrypi/lib/libopencv_legacy.a"
      "thirdparty/raspberrypi/lib/libopencv_ml.a"
      "thirdparty/raspberrypi/lib/libopencv_nonfree.a"
      "thirdparty/raspberrypi/lib/libopencv_objdetect.a"
      "thirdparty/raspberrypi/lib/libopencv_ocl.a"
      "thirdparty/raspberrypi/lib/libopencv_photo.a"
      "thirdparty/raspberrypi/lib/libopencv_stitching.a"
      "thirdparty/raspberrypi/lib/libopencv_superres.a"
      "thirdparty/raspberrypi/lib/libopencv_video.a"
      "thirdparty/raspberrypi/lib/libopencv_videostab.a"
      "thirdparty/raspberrypi/lib/libopencv_ts.a"
      "thirdparty/raspberrypi/lib/libjpeg.a"
      "thirdparty/raspberrypi/lib/libjasper.a"
      "thirdparty/raspberrypi/lib/libpng.a"
      "thirdparty/raspberrypi/lib/libIlmImf.a"
      "thirdparty/raspberrypi/lib/libzlib.a"
      "thirdparty/raspberrypi/lib/libtiff.a"];  

  if Target == "RPi"
    allLibraries = RPi_libs;
    if (SharedInfo.OpenCVUsed == %T)
      allLibraries = cat(1,allLibraries,RPi_cvlibs)  
    end
  
  else
  allLibraries = [];
  end

endfunction
