// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function Output = IsArduinoFunction(FunName)
// -----------------------------------------------------------------
// Check whether input function name is an Arduino function or not. 
//
// Input data:
//    FunName: Name of the function to be checked
//
// Output data:
//    Output: True or False depending whether given function is an 
//			  Arduino function or not 
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

//Get list of supported functions for Arduino
ArduinoFunctions = GetArduinoFunctions();

//Check whether input function is present in above list or not
FunNameInArduino = members(FunName,ArduinoFunctions);
Output = bool2s(FunNameInArduino~=0);

endfunction
