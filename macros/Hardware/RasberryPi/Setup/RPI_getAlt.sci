// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_getAlt(pin)
// Function to get the current mode of pin
//
// Calling Sequence
//  s=RPI_getAlt(pin)
//
// Parameters
//  pin: The pin number to read the voltage from. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//
// Description
//  This function returns the current mode of the pin. Output will be 0 for INPUT, 1 for OUTPUT, 2 for PWM_OUT and 3 for CLOCK.
//
// Examples
//  s=RPI_getAlt(0)
// See also
//  RPI_pinNumbering, RPI_pinModeAlt
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="gAt#1#"+string(pin)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
