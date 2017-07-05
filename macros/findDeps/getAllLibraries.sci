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
      "thirdparty/lib/raspberrypi/libwiringPi.so"
      "thirdparty/lib/raspberrypi/libcblas.a"
      "thirdparty/lib/raspberrypi/librefblas.a"
      "thirdparty/lib/raspberrypi/liblapack.a"
      "thirdparty/lib/raspberrypi/libgfortran.a"
      "thirdparty/lib/raspberrypi/libgsl.a"];

  RPi_cvlibs = [
      "thirdparty/lib/raspberrypi/libopencv_calib3d.a"
      "thirdparty/lib/raspberrypi/libopencv_contrib.a"
      "thirdparty/lib/raspberrypi/libopencv_core.a"
      "thirdparty/lib/raspberrypi/libopencv_features2d.a"
      "thirdparty/lib/raspberrypi/libopencv_flann.a"
      "thirdparty/lib/raspberrypi/libopencv_gpu.a"
      "thirdparty/lib/raspberrypi/libopencv_highgui.a"
      "thirdparty/lib/raspberrypi/libopencv_imgproc.a"
      "thirdparty/lib/raspberrypi/libopencv_legacy.a"
      "thirdparty/lib/raspberrypi/libopencv_ml.a"
      "thirdparty/lib/raspberrypi/libopencv_nonfree.a"
      "thirdparty/lib/raspberrypi/libopencv_objdetect.a"
      "thirdparty/lib/raspberrypi/libopencv_ocl.a"
      "thirdparty/lib/raspberrypi/libopencv_photo.a"
      "thirdparty/lib/raspberrypi/libopencv_stitching.a"
      "thirdparty/lib/raspberrypi/libopencv_superres.a"
      "thirdparty/lib/raspberrypi/libopencv_video.a"
      "thirdparty/lib/raspberrypi/libopencv_videostab.a"
      "thirdparty/lib/raspberrypi/libopencv_ts.a"
      "thirdparty/lib/raspberrypi/libjpeg.a"
      "thirdparty/lib/raspberrypi/libjasper.a"
      "thirdparty/lib/raspberrypi/libpng.a"
      "thirdparty/lib/raspberrypi/libIlmImf.a"
      "thirdparty/lib/raspberrypi/libzlib.a"
      "thirdparty/lib/raspberrypi/libtiff.a"];  


  if Target == "RPi"
    allLibraries = RPi_libs;
    if (SharedInfo.OpenCVUsed == %T)
      allLibraries = cat(1,allLibraries,RPi_cvlibs)  
    end
  elseif Target == "StandAlone"
    allLibraries =["thirdparty/lib/pc/windows/x64/Lapack"];
    if (SharedInfo.OpenCVUsed == %T)
      os_arch = system_getproperty('os.arch');
      if(getos() == 'Linux' & os_arch == 'amd64')
        allLibraries = cat(1,allLibraries,"thirdparty/lib/pc/linux/x64/OpenCV")
      elseif(getos() == 'Windows' & os_arch == 'amd64')
        allLibraries = cat(1,allLibraries,"thirdparty/lib/pc/windows/x64/OpenCV")    
      end  
    end
  
  else
    allLibraries = [];
  end

endfunction
