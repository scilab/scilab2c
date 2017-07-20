// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_sr595Setup(pinBase,numPins,dataPin,clockPin,latchPin)
// Function to setup sr5595 shift register chips
//
// Calling Sequence
//  RPI_sr595Setup(pinBase,numPins,dataPin,clockPin,latchPin)
//
// Parameters
//  pinBase : any number above 64. Consecutive number of numPins will be allocated alongwith.
//  numPins : number of pins, can be 0-32, 8 pins per 74x595
//  dataPin : The Raspberry pin corresponding to the 74x595's data pin. Numbering sequence to be followed as initiated by RPI_pinNumbering function.
//  clockPin: The Raspberry pin corresponding to the 74x595's clock pin. Numbering sequence to be followed as initiated by RPI_pinNumbering function.
//  latchPin: The Raspberry pin corresponding to the 74x595's latch pin. Numbering sequence to be followed as initiated by RPI_pinNumbering function.
//
// Description
//  This function sets up the extension module for the 74×595 shift register chips which can be used as general purpose output ports. Each instance can support up to 4 74×595’s daisy-chained together, giving a 32-bit output port using just 3 GPIO wires from the Raspberry Pi (or from any other GPIO expansion port connected to the Pi) One can have as many instances of these enabled in the system, provided there are 3 spare GPIO pins per instance.
//
// Examples
//  RPI_sr595Setup(100,10,0,1,2)
// See also
//  RPI_sn3218Setup, RPI_pcf8574Setup, RPI_pcf8591Setup, RPI_mcp23008Setup, RPI_mcp23016Setup, RPI_mcp23017Setup, RPI_mcp23s08Setup, RPI_mcp23s17Setup, RPI_pinNumbering
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="sr5#5#"+string(pinBase)+"#"+string(numPins)+"#"+string(dataPin)+"#"+string(clockPin)+"#"+string(latchPin)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
