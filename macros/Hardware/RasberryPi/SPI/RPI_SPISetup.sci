// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_SPISetup(channel,speed)
// Function to initialize SPI
//
// Calling Sequence
//  RPI_SPISetup(channel,spped)
//
// Parameters
//  channel: channel number, 0 or 1
//  speed  : SPI clock speed in Hz
//
// Description
//  This function initialises a channel (The Pi has 2 channels; 0 and 1). The speed parameter is an integer in the range 500,000 through 32,000,000 and represents the SPI clock speed in Hz.
//
//The returned value is the Linux file-descriptor for the device, or -1 on error.
//
// Examples
//  RPI_SPISetup(1,500000)
// See also
//  RPI_SPIDataRW, RPI_SPISetupMode, RPI_SPIGetFd
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="SPS#2#"+string(channel)+"#"+string(speed)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
