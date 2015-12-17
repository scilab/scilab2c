/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "cmd_dcmotor_run.h"

uint8 u8cmd_dcmotor_runs(uint8 board_no, uint8 motor_no, int16 duty)
{
	uint8 direction = 1;
    if(duty >= 0) 
	{
		direction = 1;
	}
    else  
	{
		direction = 0;
		duty = -duty;
	}

	if(duty > 255) duty = 255;
		
	if (dcm_mode[motor_no] == 3)  //L293
	{
		if(direction == 1)
		{
			analogWrite(dcm_pin_1[motor_no],duty);		
			analogWrite(dcm_pin_2[motor_no],0);
		}
		else
		{
			analogWrite(dcm_pin_2[motor_no],duty);		
			analogWrite(dcm_pin_1[motor_no],0);
		}
	}
	else
	{
		if(direction == 1)
		{
			digitalWrite(dcm_pin_1[motor_no],HIGH);		
			digitalWrite(dcm_pin_2[motor_no],LOW);
		}
		else
		{
			digitalWrite(dcm_pin_2[motor_no],HIGH);		
			digitalWrite(dcm_pin_1[motor_no],LOW);
		}
	}

    return 0;
}

