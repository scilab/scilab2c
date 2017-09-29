// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_serialOpen(device,baud)
// Function to initialize a serial device
//
// Calling Sequence
//  RPI_serialOpen(device,baud)
//
// Parameters
//  device: device to connect to
//  baud  : the baud rate for communication
//
// Description
//  This function opens and initialises the serial device and sets the baud rate. It sets the port into “raw” mode (character at a time and no translations), and sets the read timeout to 10 seconds. The return value is the file descriptor or -1 for any error, in which case errno will be set as appropriate.
//
// Examples
//  RPI_serialOpen("/dev/ttyAMA0", 9600)
// See also
//  RPI_serialClose, RPI_serialFlush, RPI_serialPutchar, RPI_serialPuts, RPI_serialPrintf, RPI_serialDataAvail, RPI_serialGetchar
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sOp#2#"+string(device)+"#"+string(baud)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
