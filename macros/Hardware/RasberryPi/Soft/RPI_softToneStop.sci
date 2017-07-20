// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_softToneStop(pin)
// Function to stop the software tone on the pin 
//
// Calling Sequence
//  RPI_softToneStop(pin)
//
// Parameters
//  pin: soft tone pin to stop. Numbering sequence to follow as initiated using RPI_pinNumbering
//
// Description
//  This function stops the software tone on the specified pin.
//
// Examples
//  RPI_softToneStop(1)
// See also
//  RPI_softPwmStop, RPI_softPwmWrite, RPI_softToneCreate, RPI_softToneWrite, RPI_softPwmCreate, RPI_pinNumbering, RPI_softServoWrite, RIP_softServoSetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sTS#1#"+string(pin)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
