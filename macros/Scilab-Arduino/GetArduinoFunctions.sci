// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function ArduinoFunctions = GetArduinoFunctions()
// -----------------------------------------------------------------
// Get list of Arduino functions supported 
//
// Input data:
//    None
//
// Output data:
//    List of Arduino functions supported
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

ArduinoFunctions = [
			"cmd_digital_out"
			"cmd_digital_in"
			"cmd_analog_out"
			"cmd_analog_in"
			"cmd_dcmotor_setup"
			"cmd_dcmotor_run"
            "cmd_servo_attach"
            "cmd_servo_detach"
            "cmd_servo_move"
<<<<<<< HEAD
	    "i2c_dev"];
=======
	    "cmd_i2c_dev"];
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

endfunction
