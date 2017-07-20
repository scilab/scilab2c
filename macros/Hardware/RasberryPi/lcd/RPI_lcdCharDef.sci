// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_lcdCharDef(fd,index,d0,d1,d2,d3,d4,d5,d6,d7)
// Function to redefine a user-definable character
//
// Calling Sequence
//  RPI_lcdCharDef(fd,index,data)
//
// Parameters
//  fd   : file-descriptor obtained using RPI_lcdInit function  
//  index: which character to redefine (0 to 7)
//  d0-d7: integers from 0 to 255 erpresenting the elements of the array to form the character
//
// Description
//  This function re-define one of the 8 user-definable characters in the display. 
//
//  The data array is 8 bytes which represent the character from the top-line to the bottom line. Note that the characters are actually 5×8, so only the lower 5 bits are used.
//
// Examples
//  RPI_lcdCharDef(13,0,0,0,0,31,31,31,31,0)
// See also
//  RPI_lcdCursorBlink, RPI_lcdClear, RPI_lcdCursor, RPI_lcdDisplay, RPI_lcdHome, RPI_lcdInit, RPI_lcdPutchar, RPI_lcdPosition, RPI_lcdPrintf, RPI_lcdPuts, RPI_lcdSendCommand
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="lCD#10#"+string(fd)+"#"+string(index)+"#"+string(d0)+"#"+string(d1)+"#"+string(d2)+"#"+string(d3)+"#"+string(d4)+"#"+string(d5)+"#"+string(d6)+"#"+string(d7)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
