// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_wpiToGpio(pin)
// Function to check the GPIO pin number corresponding to given wiringpi pin number.
//
// Calling Sequence
//  p=RPI_wpiToGpio(pin)
//
// Parameters
//  pin: The pin number to check in wiringpi numbering sequence.
//
// Description
//  This funtion return the GPIO pin number corresponding to the supplied wiringpi pin number.
//
// Examples
//  p=RPI_wpiToGpio(0)
// See also
//  RPI_physToGpio
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="wtG#1#"+string(pin)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
