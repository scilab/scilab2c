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

/*Function to set mode for PWM channel. Two modes are available
					"bal" --> balanced mode
					"ms"  --> mark/space mode
 */
 
void gRPI_pwmModea(char* mode,int size){
	if (mode[0] == 'm')  /*mark/space mode*/
		pwmSetMode(0);
	else if (mode[0] == 'b')
		pwmSetMode(1);
} 
