function Output = IsRPISupportFunction(FunName)
// -----------------------------------------------------------------
// Check whether input function name is a RPi support function or not. 
//
// Input data:
//    FunName: Name of the function to be checked
//
// Output data:
//    Output: True or False depending whether given function is a RPi
//            support functions or not 
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

//Get list of supported functions for AVR
RPISupportFunctions = GetRPISupportFunctions();

//Check whether input function is present in above list or not
FunNameInRPISupport = members(FunName,RPISupportFunctions);
Output = bool2s(FunNameInRPISupport~=0);

endfunction
