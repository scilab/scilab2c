function opoutsize = FA_SZ_ROW_COLUMN(in1size,in2size)
// function opoutsize = FA_SZ_OPPLUSA(in1size,in2size)
// -----------------------------------------------------------------
// Returns the size of the output computed by OPPLUS operator 
// restricted to arithmetic operations (string operations not supported.)
// 
// Assuming:
// size(in1) = [in1r,in1c]
// size(in2) = [in2r,in2c]
// size(out) = [outr,outc]
//
// we have the following combinations:
// in1   in2   outr   outc
// -----------------------
//  S     S    in2r   in2c    
//  S     M    in2r   in2c
//  M     S    in1r   in1c
//  M     M    in1r   in1c
//
// Where S means that the input is a scalar
// and M means that the input is a matrix.
// There is also the case related to the string catenation!
// This is the main difference between - and + operators.
//
// Input data:
// in1size: size of input number 1. It is an array of 2 strings. 
//          The first string specifies the number of rows.
//          The second string specifies the number of columns.
// 
// in2size: size of input number 2. It is an array of 2 strings. 
//          The first string specifies the number of rows.
//          The second string specifies the number of columns.
//
// Output data:
// opoutsize: size of output. It is an array of 2 strings. 
//            The first string specifies the number of rows.
//            The second string specifies the number of columns. 
//
// Status:
// 18-Mar-2008 -- Raffaele Nutricato: Author.
// 18-Mar-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
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
