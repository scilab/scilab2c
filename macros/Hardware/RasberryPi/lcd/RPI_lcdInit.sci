// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function out=RPI_lcdInit(rows,cols,bits,rs,strb,d0,d1,d2,d3,d4,d5,d6,d7)
// Function to initialize lcd
//
// Calling Sequence
//  RPI_lcdInit(rows,cols,bits,rs,strb,d0,d1,d2,d3,d4,d5,d6,d7)
//
// Parameters
//  rows: numer of rows in lcd
//  cols: numer of colums in lcd
//  bits: number of bits wide on the interface (4 or 8) 
//  rs  : pin number of display RS
//  strb: pin number of strobe (E)
//  d0  : pin number of data pin 1
//  d1  : pin number of data pin 2
//  d2  : pin number of data pin 3
//  d3  : pin number of data pin 4
//  d4  : pin number of data pin 5
//  d5  : pin number of data pin 6
//  d6  : pin number of data pin 7
//  d7  : pin number of data pin 8
//
// Description
//  This function initalizes an lcd display attaced to the Raspberry pi. The return value is the file-descriptor to be used for all subsequent calls to the lcd library when dealing with that LCD, or -1 to indicate a fault. (Usually incorrect parameters)
//
//  The numberin sequence to be followed as initiated using RPI_pinNumbering
//
// Examples
//  fd=RPI_lcdInit (2,16,8,11,10,0,1,2,3,4,5,6,7) ;
// See also
//  RPI_lcdCursorBlink, RPI_lcdCharDef, RPI_lcdClear, RPI_lcdCursor, RPI_lcdDisplay, RPI_lcdHome, RPI_lcdPutchar, RPI_lcdPosition, RPI_lcdPrintf, RPI_lcdPuts, RPI_lcdSendCommand, RPI_pinNumbering
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="lIn#13#"+string(rows)+"#"+string(cols)+"#"+string(bits)+"#"+string(rs)+"#"+string(strb)+"#"+string(d0)+"#"+string(d1)+"#"+string(d2)+"#"+string(d3)+"#"+string(d4)+"#"+string(d5)+"#"+string(d6)+"#"+string(d7)+"#";
    if getos()=="Linux" then
        out=unix_g("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        [out,RPI_winR]=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
