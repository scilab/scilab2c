// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_serialPrintf(fd,msg)
// Function to print to serial device
//
// Calling Sequence
//  RPI_serialPrintf(fd,msg)
//
// Parameters
//  fd : file-descriptor obtained from RPI_serialOpen function  
//  msg: message to print
//
// Description
//  This function emulates the system printf function to the serial device.
//
// Examples
//  RPI_serialPrintf(13,'White Collar rocks')
// See also
//  RPI_serialOpen, RPI_serialClose, RPI_serialFlush, RPI_serialPutchar, RPI_serialPuts, RPI_serialDataAvail, RPI_serialGetchar
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sPf#2#"+string(fd)+"#"+string(msg)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
