// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_piGlow1(leg,ring,intensity)
// Function to modify a single LED on the piGlow
//
// Calling Sequence
//  RPI_piGlow1(leg,ring,intensity)
//
// Parameters
//  leg      : leg number
//  ring     : ring number
//  intensity: brightness from 0 (off) to 255 (full)
//
// Description
//  The function modifies the brightness of the single specified LED.
//
// Examples
//  RPI_piGlow1(0,0,125)
// See also
//  RPI_piGlowLeg, RPI_piGlowRing, RPI_piGlowSetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="pG1#3#"+string(leg)+"#"+string(ring)+"#"+string(intensity)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
