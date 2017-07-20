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

function wait_and_blink()
    raspi("10.42.0.144","panda","pi");      // setup connection to Pi
    RPI_pinNumbering("wiringpi");           // initialize pin numbering
    RPI_pinMode(0,"out");                   // set pin 0 as OUTPUT
    RPI_pinMode(1,"in");                    // set pin 1 as INPUT
    RPI_waitForInterrupt(1,-1);             // wait for Interrupt at pin 1,with no timeout.
    for i=1:5                               // interrupt recieved
        RPI_digitalWrite(0,1);              // set pin 0 voltage HIGH
        RPI_delay(1000);                    // delay for 1 second
        RPI_digitalWrite(0,0);              // set pin 0 voltage LOW
        RPI_delay(1000);                    // delay for 1 second
    end
    RPI_pinMode(0,"in");                    // reset pin 0 to INPUT
    disp("Demo completed successfully.")
    raspi_close();                          // close the opened connection
endfunction
