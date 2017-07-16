// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Jorawar Singh
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_digitalReadByte()
// Function to read first 8 GPIO pins
//
// Calling Sequence
//  b=RPI_digitalReadByte()
//
// Description
//  This function read the state of the first eight GPIO pins at once. The state is read from pin0 to pin7.
//
//  Note: The MSB-LSB sequence here is opposite of that of the RPI_digitalWriteByte.
//
// Examples
//  b=RPI_digitalReadByte()
// See also
//  RPI_digitalWriteByte, RPI_digitalRead
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="BtR#0#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
