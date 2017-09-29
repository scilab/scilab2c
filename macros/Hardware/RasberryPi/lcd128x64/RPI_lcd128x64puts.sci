// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_lcd128x64puts(x,y,s,bf,fg)
// Function to send a string to the lcd display
//
// Calling Sequence
//  RPI_lcd128x64puts(x,y,s,bg,fg)
//
// Parameters
//  x : integer, x coordinate of starting point
//  y : integer, y coordinate of starting point
//  s : string to send
//  bg: integer, background color
//  fg: integer, foreground color
//
// Description
//  This function sends a string to the display. Obeys \n and \r formatting.
//
// Examples
//  RPI_lcd128x64puts(0,0,'Talos guide you',0,1)
// See also
//  RPI_lcd128x64setup, RPI_lcd128x64update, RPI_lcd128x64setOrigin, RPI_lcd128x64Orientation, RPI_lcd128x64orientCoord, RPI_lcd128x64ScreenSize, RPI_lcd128x64point, RPI_lcd128x64line, RPI_lcd128x64lineTo, RPI_lcd128x64rectangle, RPI_lcd128x64circle, RPI_lcd128x64ellipse, RPI_lcd128x64putchar, RPI_lcd128x64puts, RPI_lcd128x64clear, RPI_lcdCursorBlink, RPI_lcdCharDef, RPI_lcdClear, RPI_lcdCursor, RPI_lcdDisplay, RPI_lcdInit, RPI_lcdPutchar, RPI_lcdPosition, RPI_lcdPrintf, RPI_lcdPuts, RPI_lcdSendCommand
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="LPu#5#"+string(x)+"#"+string(y)+"#"+string(s)+"#"+string(bg)+"#"+string(fg)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
