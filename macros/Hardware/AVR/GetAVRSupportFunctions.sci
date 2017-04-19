// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRSupportFunctions = GetAVRSupportFunctions()
// -----------------------------------------------------------------
// Get list of AVR peripherals supported 
//
// Input data:
//    None
//
// Output data:
//    None
//
// Author: Siddhesh Wani Ashish Kamble 
// -----------------------------------------------------------------

AVRSupportFunctions = [
						"AVRADCSetup"
						"AVRDigitalIn"
						"AVRDigitalOut"
						"AVRDigitalSetup"
						"AVRDigitalPortSetup"
                                                "AVRTimerSetup"
						"AVRGetTimerValue"
						"AVRPWM0Setup"
						"AVRPWM0SetDuty"
						"AVRPWM1Setup"
						"AVRPWM1SetDuty"
						"AVRPWM2Setup"
						"AVRPWM2SetDuty"
						"AVRReadADC"
                                                "AVRSleep"
						"AVRUARTSetup"
						];

endfunction
