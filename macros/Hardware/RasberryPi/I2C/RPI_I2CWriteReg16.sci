// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_I2CWriteReg16(fd,reg,data)
// Function to write 16-bit data to register 
//
// Calling Sequence
//  RPI_I2CWriteReg16(fd,reg,data)
//
// Parameters
//  fd  : file descriptor obtained from RPI_I2CSetup
//  reg : integer register to write data at
//  data: integer data to write to device
//
// Description
//  This function writes a 16-bit data value into the device register indicated.  
//
// Examples
//  RPI_I2CWriteReg16(13,0x40,100)
// See also
//  RPI_i2cdetect, RPI_I2CRead, RPI_I2CReadReg8, RPI_I2CReadReg16, RPI_I2CWrite, RPI_I2CWriteReg8, RPI_I2CSetupInterface, RPI_I2CSetup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="CW3#3#"+string(fd)+"#"+string(reg)+"#"+string(data)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
