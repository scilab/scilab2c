function opout = FA_SZ_U_SVA(in1,in2)

// function opout = FA_SZ_U_SVA(in1,in2)
// -----------------------------------------------------------------
// Determines the number of rows of the output arguments 
// according to the second input argument.
//
// Input data:
// in1: specifying a matrix or a symbol.
// in2: string specifying a number or a symbol.
//
// Output data:
// opout: string containing the computed size of U matrix.
//
// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Sandeep Gupta
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//
// -----------------------------------------------------------------

in1 = string(in1);
in1 = eval(in1);
in2 = string(in2);
in2 = eval(in2);

[U,S,V] = sva(in1,in2);
outsize = size(U)

opout = outsize(2)
opout = string(opout)

endfunction
