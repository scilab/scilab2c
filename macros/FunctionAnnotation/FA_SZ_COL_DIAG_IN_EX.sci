function outsize =FA_SZ_COL_DIAG_IN_EX(insize,val)
//function outsize =FA_SZ_COL_DIAG_IN_EX(insize,val)
// -----------------------------------------------------------------
// Get size of column of the output for diag(insert) function
//
// Input data:
// insize: string specifying the size of input argument.
// val: string containing value of second input
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
SCI2CNInArgCheck(argn(2),2,2);
   
///////////////////////////////COLUMN SIZE FOR INSERT POSITION//////////////// 
    


    if((insize(1) == '1')) // If ROW size is 1 
        if(val == '0') then //For Oth position
            outsize = insize(2); //COLUMN size is equal to COLUMN size 
        else       // For ...-2,-1,1,2... position
            outsize = string(eval(insize(2))+abs(eval(val)));
            // COLUMN size is equal to COLUMN size + absolute value of position(for 1*3 matrix and 2nd postion COLUMN size is (3+2)=5
        end
    elseif((insize(2) == '1')) // If COLUMN size is 1
        if(val == '0') then   //For Oth position
            outsize = insize(1); //COLUMNS size is equal to ROW size
        else     // For ...-2,-1,1,2.... position
            outsize = string(eval(insize(1))+abs(eval(val)));
            // COLUMN size is equal to ROW size + absolute value of position(for 3*1 matrix and 1st postion COLUMN size is (3+1)=4   
        end 
////////////////////////////////////////////////////////////////////////////////


////////////////////////////COLUMN SIZE FOR EXTRACT POSITION////////////////////   
           
    else
        outsize = '1';  // For extract condition COLUMN size is always ONE.
    end
    
////////////////////////////////////////////////////////////////////////////////    

endfunction 
