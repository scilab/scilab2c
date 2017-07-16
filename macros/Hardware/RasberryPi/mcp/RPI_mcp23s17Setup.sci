// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_mcp23s17Setup(pinBase,spiPort,devId)
// Function for setting up 16-bit MCP23s17 SPI GPIO expansion chip.
//
// Calling Sequence
//  RPI_mcp23s17Setup(pinBase,spiPort,devId)
//
// Parameters
//  pinBase: any number above 64. The consecutive 16 pins will be allocated alongwith.
//  spiPort: 0 or 1 for one of the two SPI ports on the Raspberry Pi.
//  devId  : the ID of the MCP23s17 on the SPI port.
//
// Description
//  This function setups the extension module for the 16-bit MCP23s17 SPI GPIO expansion chip.
//
// Examples
//  RPI_mcp23s17Setup(67,0,0)
// See also
//  RPI_sr595Setup, RPI_pcf8574Setup, RPI_pcf8591Setup, RPI_mcp23008Setup, RPI_mcp23016Setup, RPI_mcp23017Setup, RPI_mcp23s08Setup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="ms7#3#"+string(pinBase)+"#"+string(spiPort)+"#"+string(devId)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
