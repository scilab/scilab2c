function outsize = FA_SZ_LINSPACE_ROW(insize)
//function outsize = FA_SZ_LINSPACE_ROW(insize)
// -----------------------------------------------------------------
// Get size of row for output for linspace function
//
// Input data:
// insize: string specifying the size of first input argument.
//
// Output data:
// outsize: string containing the row size of output argument.
//
// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Mushir
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//

// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(1),1,1);

    in1num = string(eval(insize(1)));
    outsize = in1num;  
endfunction
