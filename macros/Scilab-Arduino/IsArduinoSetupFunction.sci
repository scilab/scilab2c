function Output = IsArduinoSetupFunction(FunName)
// -----------------------------------------------------------------
// Check whether input function name is an Arduino setup function or not. 
//
// Input data:
//    FunName: Name of the function to be checked
//
// Output data:
//    Output: True or False depending whether given function is an 
//			  Arduino setup function or not 
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

//Get list of supported functions for Arduino
ArduinoSetupFunctions = GetArduinoSetupFunctions();

//Check whether input function is present in above list or not
FunNameInArduinoSetup = members(FunName,ArduinoSetupFunctions);
Output = bool2s(FunNameInArduinoSetup~=0);

endfunction
