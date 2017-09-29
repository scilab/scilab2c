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

#include "RPIPeripheralLCD.h"

void u8RPI_lcdCharDefs(uint8 fd,uint8 index,uint8 d0,uint8 d1,uint8 d2,uint8 d3, uint8 d4,uint8 d5,uint8 d6,uint8 d7){
    uint8 data[8]={d0,d1,d2,d3,d4,d5,d6,d7};
    lcdCharDef(fd,index,data);
}
