// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_I2CSetupInterface(device,addr)
// Function to select different I2C interfaces
//
// Calling Sequence
//  I2CSetupInterface(device,addr)
//
// Parameters
//  device: device
//  addr  : the I2C number of the device obtained using RPI_i2cdetect
//
// Description
//  This feature is not implemented currently, and will be used to select different I2C interfaces if the RPi ever receives them.
//
// Examples
//  I2CSetupInterface(1,0x48)
// See also
//  RPI_i2cdetect, RPI_I2CRead, RPI_I2CReadReg8, RPI_I2CReadReg16, RPI_I2CWrite, RPI_I2CWriteReg8, RPI_I2CWriteReg16, RPI_I2CSetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="CSI#2#"+string(device)+"#"+string(addr)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
