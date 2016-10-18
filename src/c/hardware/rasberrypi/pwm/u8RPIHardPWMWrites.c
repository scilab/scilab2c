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

/*Function to set range for pwm channel. PWM duty is decided by 'range'
 and 'value' specified using corresponding function. 
 				PWM duty = value/range 
 */
     
#include "types.h"
#include "RPIPeripheralPWM.h"
#include "RPIPeripheralDigital.h"

void u8RPIHardPWMWrites(uint8 pin, uint16 value)
{
	pwmWrite((int)phy_pin[pin-1], value);
	
} 
