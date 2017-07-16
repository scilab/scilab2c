// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_mcp23008Setup(pinBase,i2cAddress)
// Function for setting up 8-bit MCP23008 I2C GPIO expansion chip.
//
// Calling Sequence
//  RPI_mcp23008Setup(pinBase,i2cAddress)
//
// Parameters
//  pinBase  : any number above 64. The consecutive 8 pins will be allocated alongwith.
//  i2cAdress: integer, the I2C address obtained using RPI_i2cdetect function
//
// Description
//  This function sets up the extension module for the 8-bit MCP23008 I2C GPIO expansion chip.
//
// Examples
//  RPI_mcp23008Setup(73,64)
// See also
//  RPI_sr595Setup, RPI_pcf8574Setup, RPI_pcf8591Setup, RPI_mcp23016Setup, RPI_mcp23017Setup, RPI_mcp23s08Setup, RPI_mcp23s17Setup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="mp8#2#"+string(pinBase)+"#"+string(i2cAddress)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
