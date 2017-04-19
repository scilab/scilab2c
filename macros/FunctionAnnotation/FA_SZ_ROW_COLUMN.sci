function opoutsize = FA_SZ_ROW_COLUMN(in1size,in2size)
//function opoutsize = FA_SZ_ROW_COLUMN(in1size,in2size)
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
// Author: Mushir
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//

// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

// ------------------------
// --- Generate Output. ---
// ------------------------
// --- Get dimensions of input arguments. ---
in1size = string(in1size);
in2size = string(in2size);
in1type = string(in1type);
in2type = string(in2type);
in1dim = GetSymbolDimension(in1size);
in2dim = GetSymbolDimension(in2size);
if (isnum(in2size(2))) then
        if(in2size(2) == '3') then
            in1num_c = eval(in1size(2));
            in1num_r = eval(in2size(1));
            opoutsize(1) = string(in1num_r);
            opoutsize(2) = string(in1num_c);
        else
         
            in2num_r = eval(in1size(1));
            in2num_c = eval(in2size(1));
            opoutsize(1) = string(in2num_r);
            opoutsize(2) = string(in2num_c);
        end
else
        if(in2size(2) == 3)
           opoutsize(2) = '('+string(in1size(2))+')';
         
        else
           opoutsize(1) = '('+string(in1size(1))+')';
           
       end
end

endfunction
