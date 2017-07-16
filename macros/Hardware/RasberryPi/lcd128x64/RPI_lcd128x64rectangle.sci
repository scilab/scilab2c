// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_lcd128x64rectangle(x1,y1,x2,y2,color,fill)
// Function to draw a rectangle
//
// Calling Sequence
//  RPI_lcd128x64rectangle(x1,y1,x2,y2,color,fill)
//
// Parameters
//  x1   : integer, x coordinate of upper left corner
//  y1   : integer, y coordinate of upper left corner
//  x2   : integer, x coordinate of lower right corner
//  y2   : integer, y coordinate of lower right corner
//  color: integer, color of the rectangle
//  fill : 0 (for empty) or 1 (for filled)
//
// Description
//  This function draws a rectangle with (x1,y1) as the upper left point and (x2,y2) as the lower right point with specified color and fill.
//
// Examples
//  RPI_lcd128x64rectangle(0,0,1,1,0,1)
// See also
//  RPI_lcd128x64setup, RPI_lcd128x64update, RPI_lcd128x64setOrigin, RPI_lcd128x64Orientation, RPI_lcd128x64orientCoord, RPI_lcd128x64ScreenSize, RPI_lcd128x64point, RPI_lcd128x64line, RPI_lcd128x64lineTo, RPI_lcd128x64rectangle, RPI_lcd128x64circle, RPI_lcd128x64ellipse, RPI_lcd128x64putchar, RPI_lcd128x64puts, RPI_lcd128x64clear, RPI_lcdCursorBlink, RPI_lcdCharDef, RPI_lcdClear, RPI_lcdCursor, RPI_lcdDisplay, RPI_lcdInit, RPI_lcdPutchar, RPI_lcdPosition, RPI_lcdPrintf, RPI_lcdPuts, RPI_lcdSendCommand
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="Lre#6#"+string(x1)+"#"+string(y1)+"#"+string(x2)+"#"+string(y2)+"#"+string(color)+"#"+string(fill)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
