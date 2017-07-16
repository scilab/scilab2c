// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_delayMicro(time)
// Function to introduce delay in microseconds
//
// Calling Sequence
//  RPI_delayMicros(time)
//
// Parameters
//  time: Time in microseconds for which to pause the program execution.
//
// Description
//  This causes program execution to pause for at least 'time' microseconds. Due to the multi-tasking nature of Linux it could be longer. The maximum delay is an unsigned 32-bit integer or approximately 71 minutes.
//
// Examples
//  RPI_delayMicro(1000)
// See also
//  RPI_delay, RPI_micros, RPI_millis
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="deU#1#"+string(time)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
