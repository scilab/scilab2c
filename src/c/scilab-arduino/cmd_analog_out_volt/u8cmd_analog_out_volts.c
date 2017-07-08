/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Yash Pratap Singh Tomar
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "cmd_analog_out_volt.h"
#include "Arduino.h"

void u8cmd_analog_out_volts(uint8 board_no, uint8 pin, float value)
{	
    int a;
    a = ((value*255)/5);
    analogWrite(pin,a);
    
}
