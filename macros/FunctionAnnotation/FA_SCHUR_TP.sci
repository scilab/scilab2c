function out2tp = FA_SCHUR_TP(in2tp)
// function out2tp = FA_SCHUR_TP(in2tp)
// -----------------------------------------------------------------
// Get type of output for Schur function
//
// Input data:
// in2tp: string specifying the type of second input argument.
//
// Output data:
// out2tp: string containing the type for second output argument.
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

in2type = string(in2tp);

if(in2type == 'g')
	out2tp = 'd'
else
	out2tp = in2type
end
endfunction 
