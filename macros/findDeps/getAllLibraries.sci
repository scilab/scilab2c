
function allLibraries = getAllLibraries(Target)

  //Library files required for "RasberryPi" target
  RPi_libs = [
      "src/c/hardware/rasberrypi/libraries/libbcm2835.a"
      "src/c/hardware/rasberrypi/libraries/libcblas.a"
      "src/c/hardware/rasberrypi/libraries/librefblas.a"
      "src/c/hardware/rasberrypi/libraries/liblapack.a"
      "src/c/hardware/rasberrypi/libraries/libgfortran.a"
      "src/c/hardware/rasberrypi/libraries/libgsl.a"
		];

  if Target == "RPi"
  allLibraries = RPi_libs;
  else
  allLibraries = [];
  end

endfunction
