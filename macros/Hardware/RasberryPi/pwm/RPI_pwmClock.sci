// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pwmClock(value)
// Function to set the divisor for the PWM clock.
//
// Calling Sequence
//  RPI_pwmClock(value)
//
// Parameters
//  value: The divisor for the PWM clock.
//
// Description
//  This function sets the divisor for the PWM clock.
//
// Examples
//  RPI_pwmClock(100)
// See also
//  RPI_pwmMode, RPI_pwmRange, RPI_pwmToneWrite, RPI_pwmWrite  
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="pwC#1#"+string(value)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
