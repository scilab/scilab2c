/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/*Function to assigne pwm duty to specified pin. PWM duty is decided by 'value'
 and 'range' specified using corresponding function. 
 				PWM duty = value/range 
 */
     
#include "types.h"
#include "RPIPeripheralPWM.h"

uint8 u8RPIHardPWMSetRanges(uint16 value)
{
	pwmSetRange(value);
	return 0;
} 
