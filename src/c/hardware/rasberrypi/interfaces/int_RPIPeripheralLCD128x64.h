/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author:  Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALLCD128x64_H__
#define __INT_RPIPERIPHERALLCD128x64_H__

#include "types.h"
#include "RPIPeripheralLCD128x64.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_lcd128x64setupi80() RPI_lcd128x64setup();

#define u80RPI_lcd128x64clear(colour) u8RPI_lcd128x64clears(colour);
#define d0RPI_lcd128x64clear(colour) u8RPI_lcd128x64clears(colour);

#define u80RPI_lcd128x64Orientation(orientation) u8RPI_lcd128x64Orientations(orientation);
#define d0RPI_lcd128x64Orientation(orientation) u8RPI_lcd128x64Orientations(orientation);

#define u80u80RPI_lcd128x64setOrigin(x,y) u8RPI_lcd128x64setOrigins(x,y);
#define d0d0RPI_lcd128x64setOrigin(x,y) u8RPI_lcd128x64setOrigins(x,y);

#define u80u80u80RPI_lcd128x64point(x,y,colour) u8RPI_lcd128x64points(x,y,colour);
#define d0d0d0RPI_lcd128x64point(x,y,colour) u8RPI_lcd128x64points(x,y,colour);
#define u80u80u80RPI_lcd128x64lineTo(x,y,colour) u8RPI_lcd128x64lineTos(x,y,colour);
#define d0d0d0RPI_lcd128x64lineTo(x,y,colour) u8RPI_lcd128x64lineTos(x,y,colour);

#define u80u80u80u80u80RPI_lcd128x64line(x0,y0,x1,y1,colour) u8RPI_lcd128x64lines(x0,y0,x1,y1,colour);
#define d0d0d0d0d0RPI_lcd128x64line(x0,y0,x1,y1,colour) u8RPI_lcd128x64lines(x0,y0,x1,y1,colour);
#define u80u80u80u80u80RPI_lcd128x64circle(x,y,r,colour,filled) u8RPI_lcd128x64circles(x,y,r,colour,filled);
#define d0d0d0d0d0RPI_lcd128x64circle(x,y,r,colour,filled) u8RPI_lcd128x64circles(x,y,r,colour,filled);
#define u80u80u80u80u80RPI_lcd128x64putchar(x,y,c,bgCol,fgCol) u8RPI_lcd128x64putchars(x,y,c,bgCol,fgCol);
#define d0d0d0d0u80RPI_lcd128x64putchar(x,y,c,bgCol,fgCol) u8RPI_lcd128x64putchars(x,y,c,bgCol,fgCol);

#define u80u80g2u80u80RPI_lcd128x64puts(x,y,str,size,bgCol,fgCol) u8RPI_lcd128x64putss(x,y,str,size[1],bgCol,fgCol);
#define d0d0g2d0d0RPI_lcd128x64puts(x,y,str,size,bgCol,fgCol) u8RPI_lcd128x64putss(x,y,str,size[1],bgCol,fgCol);

#define u80u80u80u80u80u80RPI_lcd128x64rectangle(x1,y1,x2,y2,colour,filled) u8RPI_lcd128x64rectangles(x1,y1,x2,y2,colour,filled);
#define d0d0d0d0d0d0RPI_lcd128x64rectangle(x1,y1,x2,y2,colour,filled) u8RPI_lcd128x64rectangles(x1,y1,x2,y2,colour,filled);
#define u80u80u80u80u80u80RPI_lcd128x64ellipse(cx,cy,xRadius,yRadius,colour,filled) u8RPI_lcd128x64ellipses(cx,cy,xRadius,yRadius,colour,filled);
#define d0d0d0d0d0d0RPI_lcd128x64ellipse(cx,cy,xRadius,yRadius,colour,filled) u8RPI_lcd128x64ellipses(cx,cy,xRadius,yRadius,colour,filled);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALLCD128x64_H__ */
