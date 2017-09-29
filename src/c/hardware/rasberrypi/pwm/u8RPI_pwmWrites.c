/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani, Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "RPIPeripheralPWM.h"

/*Function to write the given value to the pwm pin*/

void u8RPI_pwmWrites(uint8 pin, uint16 value){
	pwmWrite(pin, value);
} 
