function outsize = FA_SZ_COLUMN_DIAG(insize)
//function outsize = FA_SZ_COLUMN_DIAG(insize)
// -----------------------------------------------------------------
// Get size of column of the output for diag function
//
// Input data:
// insize: string specifying the size of input argument.
//
// Output data:
// outsize: string containing the column size for output argument.
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

    if(insize(2)=='1') then
        outsize = insize(1);

    elseif(insize(1) == insize(2)) 
        outsize = '1';
    else
        outsize = insize(2);        

    end
endfunction 
