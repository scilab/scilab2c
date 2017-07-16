// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_SPISetupMode(channel,speed,Mode)
// Function to initialize SPI
//
// Calling Sequence
//  RPI_SPISetupMode(channel,spped,Mode)
//
// Parameters
//  channel: channel number, 0 or 1
//  speed  : SPI clock speed in Hz
//  Mode   : integer, mode to set
//
// Description
//
// Examples
//  RPI_SPISetupMode(1,500000,2)
// See also
//  RPI_SPIDataRW, RPI_SPISetup, RPI_SPIGetFd
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="SPM#23#"+string(channel)+"#"+string(speed)+"#"+string(Mode)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
