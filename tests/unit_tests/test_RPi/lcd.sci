// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Jorawar Singh
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function lcd()
    raspi("10.42.0.144","panda","pi");      // setup connection to Pi
    RPI_pinNumbering("wiringpi");           // initialize pin numbering
    // LCD connections:
    // 2 rows
    // 16 columns
    // 8 bits
    // wiringPi pin 28   - rs
    // wiringPi pin 29   - strobe/E
    // wiringPi pins 0-7 - lcd data pins 0 to 7
    //

    fd=RPI_lcdInit(2,16,8,28,29,0,1,2,3,4,5,6,7)   // initialize lcd with the above mentioned connections
    RPI_lcdDisplay(fd,1)                    // switch on display
    RPI_lcdCursor(fd,1)                     // show the cursor
    RPI_lcdCursorBlink(fd,1)                // blink the cursor
    RPI_lcdPrintf(fd,"The Elder")           // print to lcd
    RPI_lcdPosition(fd,0,1)                 // Goto second row first column
    RPI_lcdPrintf(fd,"Scrolls V Skyrim")    // print to lcd
    RPI_lcdHome(fd)                         // goto first row first column (0,0)
    RPI_lcdClear(fd)                        // clear the lcd
    RPI_lcdPrintf(fd,"Volume: ")            // print character corresponding to number 125
    RPI_lcdCharDef(fd,0,0,0,0,0,0,0,0,255)     // define a custom character at position 0
    RPI_lcdCharDef(fd,1,0,0,0,0,0,0,255,255)   // define a custom character at position 1
    RPI_lcdCharDef(fd,2,0,0,0,0,0,255,255,255)
    RPI_lcdCharDef(fd,3,0,0,0,0,255,255,255,255)
    RPI_lcdCharDef(fd,4,0,0,0,255,255,255,255,255)
    RPI_lcdCharDef(fd,5,0,0,255,255,255,255,255,255)
    RPI_lcdCharDef(fd,6,0,255,255,255,255,255,255,255)
    RPI_lcdCharDef(fd,7,255,255,255,255,255,255,255,255)
    for i=0:7:1
        RPI_lcdPutchar(fd,1)                // print the custom characters
    end
    disp("Demo completed successfully.")
    raspi_close();                          // close the opened connection
endfunction
