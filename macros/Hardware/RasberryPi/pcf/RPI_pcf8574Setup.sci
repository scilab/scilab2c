// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pcf8574Setup(pinBase,i2cAddress)
// Function for setting up PCF8574 8-bit GPIO expander IC
//
// Calling Sequence
//  RPI_pcf8574Setup(pinBase,i2cAddress)
//
// Parameters
//  pinBase   : any number above 64. The consecutive 8 pins will be allocated alongwith. 
//  i2cAddress: I2C address obtained using RPI_i2cdetect function
//
// Description
//  This function sets up the extension module for the PCF8574 8-bit GPIO expander IC. Can be called multiple times for multiple PCF8574 using different pinBase for each.
//
//You don’t need to specify the number of pins here – the PCF8754 has 8 pins.
//
// Examples
//  RPI_pcf8574Setup(67,100)
// See also
//  RPI_pcf8591Setup
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="pf7#2#"+string(pinBase)+"#"+string(i2cAddress)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
