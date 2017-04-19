function outsize = FA_SZ_ROW_COLUMN_CAT(inval,in1size,in2size)
//function outsize = FA_SZ_ROW_COLUMN_CAT(inval,in1size,in2size)
// -----------------------------------------------------------------
// Get size of row (col) of the output for cat function
//
// Input data:
// inval: string specifying the value of input argument.
// in1size: string specifying the row (col) of second input
// in3size: string specifying the row (col) of third input
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
SCI2CNInArgCheck(argn(1),3,3);


in1size = string(in1size);
in2size = string(in2size);
inval = string(inval);
if(inval == '1') then
    in1num_r = eval(in1size);
    in2num_r = eval(in2size);
    outsize(1) = string(in1num_r + in2num_r);
    outsize(2) = string(in2num_r);
elseif(inval == '2') then
    in1num_c = eval(in1size);
    in2num_c = eval(in2size);
    outsize(1) = string(in1num_c);
    outsize(2) = string(in1num_c + in2num_c);
else
     error(36, "Wrong input argument '+inval+'. Use 1 or 2 as first argument in cat command.");
end

endfunction 
