// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function arduinoFiles = getArduinoFiles()
// -----------------------------------------------------------------
// Returns address of some default arduino files
//
// Input data:
//    None
//
// Output data:
//    Returns address of some default arduino files
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

  arduinoFiles = [
		"src/c/scilab-arduino/default_files/setup_arduino.h"
		"src/c/scilab-arduino/default_files/Makefile"
		"src/c/scilab-arduino/default_files/sci2c_arduino.ino"];
endfunction
