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
