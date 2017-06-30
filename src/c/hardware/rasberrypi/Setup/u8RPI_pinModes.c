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

#include <stdio.h>
#include "types.h"
#include "RPIPeripheralSetup.h"

void u8RPI_pinModes(uint8 pin,char* mode,int size){
    if (mode[0]=='i'){
        pinMode(pin,INPUT);
    }
    else if (mode[0]=='o'){
        pinMode(pin,OUTPUT);
    }
    else if (mode[0]=='p'){
        pinMode(pin,PWM_OUTPUT);
    }
    else if (mode[0]=='c'){
        pinMode(pin,GPIO_CLOCK);
    }

}
