// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_gertboardAnalogRead(pin)
// Function to read voltage from gertboard
//
// Calling Sequence
//  RPI_gertboardAnalogRead(pin)
//
// Parameters
//  pin:the pin to read the voltage from. Numbering follows the pinBase from RPI_gertboardSetup function.
//
// Description
//  After initialinzing the pinBase using the RPI_gertboeardSetup function, reading channel pinBase + 0 reads the first analog input channel (pin DA0 on the Gertboard). Returns a value from 0 to 1023 representing the value on the supplied pin.
//
// Examples
//  RPI_gertboardAnalogRead(101)
// See also
//  RPI_gertboardAnalogSetup, RPI_gertboardAnalogWrite, RPI_gertboardSPISetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/
//  http://pi4j.com/apidocs/com/pi4j/wiringpi/Gertboard.html

    commande="gAR#1#"+string(pin)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction

