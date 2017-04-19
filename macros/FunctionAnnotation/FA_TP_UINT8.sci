function typeout = FA_TP_UINT8()
// function typeout = FA_TP_UINT8()
// -----------------------------------------------------------------
// Returns the "uint8" type specifier 
// for Function Annotations.
//
// Input data:
// ---
//
// Output data:
// typeout: string containing the type specifier.
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
SCI2CNInArgCheck(argn(2),0,0);


// ------------------------
// --- Generate Output. ---
// ------------------------
typeout = 'u8';

endfunction
