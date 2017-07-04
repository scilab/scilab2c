 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __RPIPERIPHERALLCD128x64_H__
#define __RPIPERIPHERALLCD128x64_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "lcd128x64.h"

int8 RPI_lcd128x64setup(void);
void u8RPI_lcd128x64clears(uint8 colour);
void u8RPI_lcd128x64Orientations(uint8 orientation);
void u8RPI_lcd128x64setOrigins(uint8 x, uint8 y);
void u8RPI_lcd128x64points(uint8 x, uint8 y, uint8 colour);
void u8RPI_lcd128x64lineTos(uint8 x, uint8 y, uint8 colour);
void u8RPI_lcd128x64lines(uint8 x0, uint8 y0, uint8 x1, uint8 y1, uint8 colour);
void u8RPI_lcd128x64circles(uint8 x, uint8 y, uint8 r, uint8 colour, uint8 filled);
void u8RPI_lcd128x64putchars(uint8 x, uint8 y, uint8 c, uint8 bgCol, uint8 fgCol);
void u8RPI_lcd128x64putss(uint8 x, uint8 y, char *str,int size, uint8 bgCol, uint8 fgCol);
void u8RPI_lcd128x64rectangles(uint8 x1, uint8 y1, uint8 x2, uint8 y2, uint8 colour, uint8 filled);
void u8RPI_lcd128x64ellipses(uint8 cx, uint8 cy, uint8 xRadius, uint8 yRadius, uint8 colour, uint8 filled);

//void u8RPI_lcd128x64orientCoordinatess(uint8 *x, uint8 *y);
//void u8RPI_lcd128x64getScreenSizes(uint8 *x, uint8 *y);
//void RPI_lcd128x64update(void);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALLCD128x64_H__*/
