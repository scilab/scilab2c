function opout = FA_TP_PREC(in1,in2)
// function opout = FA_TP_PREC(in1,in2)
// -----------------------------------------------------------------
//
// Status:
// 2009 -- Arnaud Torset: Author.
//
// -----------------------------------------------------------------
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) INRIA
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at    
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt


// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

in1Pin2 = in1+in2;

select (in1Pin2),
	case 'ss' then opout = 's',
	case 'sc' then opout = 's',
	case 'cs' then opout = 's',
	case 'cc' then opout = 's',
	else opout = 'd',
end

endfunction
