function outsize = FA_SZ_LQR(inval)
//function outsize = FA_SZ_LQR(inval)
// -----------------------------------------------------------------
// Get size of output for lqr function
//
// Input data:
// inval: string specifying the value of input argument.
//
// Output data:
// outsize: string containing the size for output argument.
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

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(1),1,1);

	inval = eval(inval)
	outsize(1) = string(int(inval));
    outsize(2) = string(modulo(inval*10,10));
 endfunction 
