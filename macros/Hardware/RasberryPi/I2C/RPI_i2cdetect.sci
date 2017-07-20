// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_i2cdetect()
// Function to get the address of attached i2c device
//
// Calling Sequence
//  RPI_i2cdetect()
//
// Description
//  This function returns the address of the i2c device connected to the Raspberry pi.
//
// Examples
//  addr=RPI_i2cdetect()
// See also
//  RPI_I2CRead, RPI_I2CSetup, RPI_I2CReadReg8, RPI_I2CReadReg16, RPI_I2CSetupInterface, RPI_I2CWrite, RPI_I2CWriteReg8, RPI_I2CWriteReg16
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    rev=RPI_boardRev();
    commande="i2c#1#i2cdetect -y "+string(strtod(rev)-1)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
