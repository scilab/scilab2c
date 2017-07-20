// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_digitalWriteByte(Byte)
// Function to set first eight GPIO pins to a particular value
//
// Calling Sequence
//  RPI_digitalWriteByte(Byte)
//
// Parameters
//  Byte: An 8-bit byte to write on the first 8 GPIO pins. Inter from 0 to 255.
//
// Description
//  This writes the 8-bit byte supplied to the first 8 GPIO pins. It’s the fastest way to set all 8 bits at once to a particular value, although it still takes two write operations to the Pi’s GPIO hardware. The state is written from pin7 to pin0.
//
//  Note: The MSB-LSB sequence here is opposite to that from RPI_digitalReadByte.
//
// Examples
//  RPI_digitalWriteByte(128)
// See also
//  RPI_digitalReadByte, RPI_digitalWrite
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="BtW#1#"+string(Byte)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
