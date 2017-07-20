// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pwmMode(Mode)
// Function to set the mode for the PWM generator
//
// Calling Sequence
//  RPI_pwmMode(mode)
//
// Parameters
//  mode: The mode to set for the PWM generator. 'ms' (for mark:space) or 'bal' (for balanced)
//
// Description
//  This function sets the mode for the PWM generator. The PWM generator can run in 2 modes – “balanced” and “mark:space”. The mark:space mode is traditional, however the default mode in the Pi is “balanced”. Switch modes by supplying the parameter: bal or ms
//
// Examples
//  RPI_pwmMode('bal')
// See also
//  RPI_pwmRange, RPI_pwmClock, RPI_pwmToneWrite, RPI_pwmWrite
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    if Mode=='ms' then
        commande="pwM#1#0#";
    elseif Mode=='bal' then
        commande="pwM#1#1#";
    else:
        error("mode should be ""ms"" or ""bal""");
    end
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
