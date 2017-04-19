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
// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//
// -----------------------------------------------------------------

//Get list of supported functions for AVR
RPISupportFunctions = GetRPISupportFunctions();

//Check whether input function is present in above list or not
FunNameInRPISupport = members(FunName,RPISupportFunctions);
Output = bool2s(FunNameInRPISupport~=0);

endfunction
