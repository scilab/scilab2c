function out2sz = FA_SCHUR_SZ(in2tp,in1sz)
//function out2sz = FA_SCHUR_SZ(in2tp,in1sz)
// -----------------------------------------------------------------
// Get size of output for Schur function
//
// Input data:
// in2tp: string specifying the type of second input argument.
// in1sz: string specifying the size of first input argument.
//
// Output data:
// out2sz: string containing the size for second output argument.
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
SCI2CNInArgCheck(argn(2),2,2);

in2type = string(in2tp);
in1sz = string(in1sz);
in1dim = eval(in1sz);

if(in2type == 'g')
	out2sz = '1'
else
	out2sz = string(in1dim)
end

endfunction 
