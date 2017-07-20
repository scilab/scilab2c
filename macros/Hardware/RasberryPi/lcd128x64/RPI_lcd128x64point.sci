// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_lcd128x64point(x,y,color)
// Function to plot a point
//
// Calling Sequence
//  RPI_lcd128x64point(x,y,color)
//
// Parameters
//  x    : integer, x coordinate
//  y    : integer, y coordinate
//  color: integer, color of the point
//
// Description
//  This function plots a point at x,y.
//
// Examples
//  RPI_lcd128x64point(2,2,0)
// See also
//  RPI_lcd128x64setup, RPI_lcd128x64update, RPI_lcd128x64setOrigin, RPI_lcd128x64Orientation, RPI_lcd128x64orientCoord, RPI_lcd128x64ScreenSize, RPI_lcd128x64point, RPI_lcd128x64line, RPI_lcd128x64lineTo, RPI_lcd128x64rectangle, RPI_lcd128x64circle, RPI_lcd128x64ellipse, RPI_lcd128x64putchar, RPI_lcd128x64puts, RPI_lcd128x64clear, RPI_lcdCursorBlink, RPI_lcdCharDef, RPI_lcdClear, RPI_lcdCursor, RPI_lcdDisplay, RPI_lcdInit, RPI_lcdPutchar, RPI_lcdPosition, RPI_lcdPrintf, RPI_lcdPuts, RPI_lcdSendCommand
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="Lpo#3#"+string(x)+"#"+string(y)+"#"+string(color)+"#";
    if getos=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
