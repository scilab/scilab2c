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
<<<<<<< HEAD
    int a;
    a = ((value*255)/5);
    analogWrite(pin,a);
=======
    int a;			//declaring variable 
    a = ((value*255)/5);	//converting given voltage to duty cycle value (0 - 255)
    analogWrite(pin,a);		//passing pin no. and duty cycle value
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
    
}
