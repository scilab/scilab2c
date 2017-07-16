// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_digitalWrite(pin,Volt)
// Function to set digital voltage at the given pin
//
// Calling Sequence
//  RPI_digitalWrite(pin,Volt)
//
// Parameters
//  pin : The pin number to set the voltage at. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//  Volt: Digital voltage to set. 0 (for logic-LOW) or 1 (for logic-HIGH)
//
// Description
//  This funtion sets the voltage at the given pin. 0v for logic 0 and 3.3v for logic 1.
//  Note: pin should be set for output mode using RPI_pinMode.
//
// Examples
//  RPI_digitalWrite(0,1)
// See also
//  RPI_analogWrite, RPI_digitalRead, RPI_digitalRead, RPI_pinNumbering, RPI_pinMode
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    if (Volt==0 | Volt==1) then
        commande="diW#2#"+string(pin)+"#"+string(Volt)+"#";
    else
        error("Voltage logic should be 0 or 1.");
    end
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
