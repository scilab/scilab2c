// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pwmToneWrite(pin,freq)
// Function to write a tone of a given frequency to the pin
//
// Calling Sequence
//  RPI_pwmToneWrite(pin,freq)
//
// Parameters
//  pin : The pin to set the frequency on. Numbering to be followed as initiated using RPI_pinNumbering.
//  freq: frequency to write
//
// Description
//  This function write the given frequency tone to the given pin.
//
// Examples
//  RPI_pwmToneWrite(0,100)
// See also
//  RPI_pwmMode, RPI_pwmRange, RPI_pwmClock, RPI_pwmWrite, PRI_pinNumbering
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="pwT#2#"+string(pin)+"#"+string(freq)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
