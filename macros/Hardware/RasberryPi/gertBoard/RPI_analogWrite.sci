// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_analogWrite(pin,Volt)
// Function to set analog voltage at given analog pin.
//
// Calling Sequence
//  RPI_analogWrite(pin,Volt)
//
// Parameters
//  pin : The pin number to set the voltage at. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//  Volt: The analog voltage value to set at the pin.
//
// Description
//  This writes the given value to the supplied analog pin. Additional analog modules need to be registered to enable this function for devices such as the Gertboard.
//
// Examples
//  RPI_analogWrite(0,100)
// See also
//  RPI_analogRead, RPI_digitalRead, RPI_digitalWrite, RPI_pinNumbering, RPI_pinMode
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="anW#2#"+string(pin)+"#"+string(Volt)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
