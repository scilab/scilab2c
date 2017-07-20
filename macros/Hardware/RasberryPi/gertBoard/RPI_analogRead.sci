// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_analogRead(pin)
// Function to read the analog voltage at the given pin
//
// Calling Sequence
//  v=RPI_analogRead(pin)
//
// Parameters
//  pin: The pin number to read the voltage from. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//
// Description
//  This function returns the value read on the supplied analog input pin. Additional analog modules need to be registered to enable this function for devices such as the Gertboard, quick2Wire analog board, etc.
//
// Examples
//  v=RPI_analogRead(0)
// See also
//  RPI_analogWrite, RPI_digitalRead, RPI_digitalWrite, RPI_pinNumbering, RPI_pinMode
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="anR#1#"+string(pin)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
