// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_softToneWrite(pin,freq)
// Function to update tone frquency on the soft tone pin
//
// Calling Sequence
//  RPI_softToneWrite(pin,freq)
//
// Parameters
//  pin : soft tone pin
//  freq: frequency value to write
//
// Description
//  This function updates the tone frequency value on the given pin. The tone will be played until you set the frequency to 0.
//
// Examples
//  RPI_softToneWrite(1,200)
// See also
//  RPI_softPwmStop, RPI_softPwmWrite, RPI_softToneCreate, RPI_softToneStop, RPI_softPwmCreate, RPI_softServoWrite, RIP_softServoSetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sTW#2#"+string(pin)+"#"+string(freq)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
