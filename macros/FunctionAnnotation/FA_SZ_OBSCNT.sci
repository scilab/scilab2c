function outsize = FA_SZ_OBSCNT(inval,insz1,insz2,nout)
//function outsize = FA_SZ_OBSCNT(inval,insz1,insz2,nout)
// -----------------------------------------------------------------
// Get size of output for obscont function
//
// Input data:
// inval: string specifying the value of first input argument.
// insz1: string specifying the row size of first input argument.
// insz2: string specifying the col size of first input argument.
// nout: string specifying number of output arguments
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
SCI2CNInArgCheck(argn(4),4,4);

	inval = eval(inval);
	insz1 = eval(insz1);
	insz2 = eval(insz2);
	//nout = eval(nout);
	no_of_st = int(inval);
	no_of_in = insz2 - no_of_st;
	no_of_op = insz1 - no_of_st;
	if(nout == 1)
		outsize(1) = string(no_of_st+no_of_op+2);
    	outsize(2) = string(no_of_st+no_of_in);
    else
    	outsize(1) = string(no_of_st+no_of_in+no_of_op+2);
    	outsize(2) = string(no_of_st+no_of_in+no_of_op);   
    end 		
endfunction 
