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
