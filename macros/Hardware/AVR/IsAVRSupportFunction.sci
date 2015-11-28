function Output = IsAVRSupportFunction(FunName)
// -----------------------------------------------------------------
// Check whether input function name is an AVR support function or not. 
//
// Input data:
//    FunName: Name of the function to be checked
//
// Output data:
//    Output: True or False depending whether given function is an AVR
//            support functions or not 
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

//Get list of supported functions for AVR
AVRSupportFunctions = GetAVRSupportFunctions();

//Check whether input function is present in above list or not
FunNameInAVRSupport = members(FunName,AVRSupportFunctions);
Output = bool2s(FunNameInAVRSupport~=0);

endfunction
