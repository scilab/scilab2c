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

/*Function to set clock for pwm channel. Default clock is 19.2 MHz. 'clk_divisor'
 along with range decides frequency for PWM
 			PWM frequency = 19.2 MHz / clk_divisor/ range
            Range for clk_divisor = 1-2048			
*/

void u16RPI_pwmClocks(uint16 divisor){
	pwmSetClock(divisor);	
} 
