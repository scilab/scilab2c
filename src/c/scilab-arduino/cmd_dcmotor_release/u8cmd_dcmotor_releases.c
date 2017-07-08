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

#include "cmd_dcmotor_release.h"
#include "Arduino.h"

void u8cmd_dcmotor_releases(uint8 board_no, uint8 motor_no)
{
	if (dcm_mode[motor_no] == 3)
	{
		analogWrite(dcm_pin_1[motor_no],0);
		analogWrite(dcm_pin_2[motor_no],0);
	}

	else 
	{
		digitalWrite(dcm_pin_1[motor_no],LOW);
		digitalWrite(dcm_pin_2[motor_no],LOW);
	}
}
