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

#include "RPIPeripheralI2C.h"

int8 u16RPI_I2CReadReg8s(uint16 fd,uint16 reg){
    int8 out;
    out=wiringPiI2CReadReg8(fd,reg);
    return (out);
}
