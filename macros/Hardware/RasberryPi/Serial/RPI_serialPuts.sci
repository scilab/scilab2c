// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_serialPuts(fd,s)
// Function to send a null-terminalted string
//
// Calling Sequence
//  RPI_serialPuts(fd,s)
//
// Parameters
//  fd: file-descriptor obtained from RPI_serialOpen function  
//  s : string to send
//
// Description
//  Sends the nul-terminated string to the serial device identified by the given file descriptor.
//
// Examples
//  RPI_serialPuts(13,'Believe it, Dattebayo!\0')
// See also
//  RPI_serialOpen, RPI_serialClose, RPI_serialFlush, RPI_serialPutchar, RPI_serialPrintf, RPI_serialDataAvail, RPI_serialGetchar
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sPs#2#"+string(fd)+"#"+string(s)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
