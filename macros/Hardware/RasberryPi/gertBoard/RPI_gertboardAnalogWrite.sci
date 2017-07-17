// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_gertboardAnalogWrite(pin,value)
// Function to write voltage value to pins on gertboard
//
// Calling Sequence
//  RPI_gertboardAnalogWrite(pin,value)
//
// Parameters
//  pin  : the pin to read the voltage from. Numbering follows the pinBase from RPI_gertboardSetup function.
//  value: voltage value to write
//
// Description
//  After initialinzing the pinBase using the RPI_gertboeardSetup function, writing pinBase + 0 outputs to the first analog output channel. (Pin AD0).
//
// Examples
//  RPI_gertboardAnalogWrite(100,100)
// See also
//  RPI_gertboardAnalogSetup, RPI_gertboardAnalogRead, RPI_gertboardSPISetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/
//  http://pi4j.com/apidocs/com/pi4j/wiringpi/Gertboard.html

    commande="gAW#2#"+string(pin)+"#"+string(value)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
