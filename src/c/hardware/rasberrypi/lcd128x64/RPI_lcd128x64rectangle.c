/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "RPIPeripheralLCD128x64.h"

void u8RPI_lcd128x64rectangles(uint8 x1,uint8 y1,uint8 x2,uint8 y2,uint8 colour,uint8 filled){
    lcd128x64rectangle(x1,y1,x2,y2,colour,filled);
}
