// Copyright (C) 2017 - IIT Bombay - FOSSEE

// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Yash Pratap Singh Tomar
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


function C_GenerateMkfle_arduino(FileInfo,SharedInfo)

  PrintStringInfo('ARDUINO_DIR   = /usr/share/arduino',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('ARDMK_DIR   = /usr/share/arduino',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('AVR_TOOLS_DIR = /usr',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('BOARD_TAG     = ' + SharedInfo.Board_name ,FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('USER_LIB_PATH = ../',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('ARDUINO_LIBS = ../src/c ../includes ../interfaces ../ Wire',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('ARDUINO_PORT = /dev/ttyACM0',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('include /usr/share/arduino/Arduino.mk',FileInfo.MakefileFilename,'file','y','y');
  
endfunction	  
