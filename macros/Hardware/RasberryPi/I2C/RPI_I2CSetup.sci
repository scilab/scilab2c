// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_I2CSetup(addr)
// Function to initialize the I2C system
//
// Calling Sequence
//  fd=RPI_I2CSetup(addr)
//
// Parameters
//  addr: integer, the I2C number of the device obtained using RPI_i2cdetect
//
// Description
//  This initialises the I2C system with your given device identifier. The addr is the I2C number of the device and obtained using RPI_i2cdetect program. The function works out the Raspberry Pi revision and opens the appropriate device in /dev.
//
//The return value is the standard Linux filehandle, or -1 if any error – in which case, errno can be consulted as usual.
//
// Examples
//  fd=RPI_I2CSetup(64)
// See also
//  RPI_i2cdetect, RPI_I2CRead, RPI_I2CReadReg8, RPI_I2CReadReg16, RPI_I2CWrite, RPI_I2CWriteReg8, RPI_I2CWriteReg16, RPI_I2CSetupInterface
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="CSe#1#"+string(addr)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
