// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_softPwmWrite(pin,value)
// Function to update the softpwm value on the pin
//
// Calling Sequence
//  RPI_softPwmWrite(pin,value)
//
// Parameters
//  pin  : pin to act on, should be initialised using RPI_softPwmCreate. Numbering sequence follows from_RPI pinNumbering
//  value: value to write
//
// Description
//  This updates the PWM value on the given pin. The value is checked to be in-range and pins that haven’t previously been initialised via softPwmCreate will be silently ignored.
//
// Examples
//  RPI_softPwmWrite(1,250)
// See also
//  RPI_softPwmStop, RPI_softToneCreate, RPI_softToneStop, RPI_softToneWrite, RPI_softPwmCreate, RPI_pinNumbering, RPI_softServoWrite, RIP_softServoSetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sPW#2#"+string(pin)+"#"+string(value)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
