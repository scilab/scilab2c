// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_shiftOut(dpin,cpin,order,val)
// Function to shift out 8-bit data with value=val
//
// Calling Sequence
//  RPI_shiftOut(dpin,cpin,order,val)
//
// Parameters
//  dpin : datapin
//  cpin : clockpin
//  order: integer, 0 (LSB first) or 1 (MSB first)
//  val  : integer, data to send
//
// Description
//  The shifts an 8-bit data value val out with the data being sent out on dPin and the clock being sent out on the cPin. order is as above. Data is clocked out on the rising or falling edge – ie. dPin is set, then cPin is taken high then low – repeated for the 8 bits.
//
// Examples
//  RPI_shiftOut(1,2,0,123)
// See also
//  RPI_shiftIn
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="shO#4#"+string(dpin)+"#"+string(cpin)+"#"+string(order)+"#"+string(val)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
