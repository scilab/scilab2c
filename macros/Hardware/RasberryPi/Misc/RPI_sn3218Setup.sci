// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_sn3218Setup(pinBase)
// Function for setting up SN3218 I2C based LED controller.
//
// Calling Sequence
//  RPI_sn3218Setup(pinBase)
//
// Parameters
//  pinBase: any number above 64. The consecutive 18 pins will be allocated alongwith.
//
// Description
//  This function sets up the extension module for the SN3218 I2C based LED controller.There is no I2C device address passed into the setup function – the SN3218 has a fixed I2C address of 0x54, so there’s no need to refer to it other than internally inside the driver. This also means that only one device can be connected to a Raspberry Pi.
//
// Examples
//  RPI_sn3218Setup(67)
// See also
//  RPI_sr595Setup, RPI_pcf8574Setup, RPI_pcf8591Setup, RPI_mcp23008Setup, RPI_mcp23016Setup, RPI_mcp23017Setup, RPI_mcp23s08Setup, RPI_mcp23s17Setup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sn3#1#"+string(pinBase)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
