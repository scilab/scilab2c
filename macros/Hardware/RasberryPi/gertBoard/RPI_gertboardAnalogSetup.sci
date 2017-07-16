// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_gertboardAnalogSetup(pinBase)
// Function to setup the gertboard
//
// Calling Sequence
//  RPI_getboardAnalogSetup(pinBase)
//
// Parameters
//  pinBase:the base pin that the analog ports will appear as
//
// Description
//  This function calls a setup routine that allocates 2 pins and overlays the analog to digital input pins with the digital to analog output pins. pinBase is the base pin that you want the analog ports to appear as. So reading channel pinBase + 0 reads the first analog input channel (pin DA0 on the Gertboard), and writing pinBase + 0 outputs to the first analog output channel. (Pin AD0)
//
// Examples
//  RPI_getboardAnalogSetup(100)
// See also
//  RPI_gertboardAnalogRead, RPI_gertboardAnalogWrite, RPI_gertboardSPISetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/
//  http://pi4j.com/apidocs/com/pi4j/wiringpi/Gertboard.html

    commande="gAS#1#"+string(pinBase)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
