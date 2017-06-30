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

/*Function to set mode for PWM channel. Two modes are available
					0 --> balanced mode
					1 --> mark/space mode
 */
     
#include "types.h"
#include "RPIPeripheralPWM.h"

void u8RPIHardPWMSetModes(uint8 mode)
{
	if (mode == 1)  /*mark/space mode*/
		pwmSetMode(PWM_MODE_MS);
	else
		pwmSetMode(PWM_MODE_BAL);
	
} 
