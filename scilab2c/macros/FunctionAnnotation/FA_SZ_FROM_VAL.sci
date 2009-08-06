function opout = FA_SZ_FROM_VAL(in1)
// function  opout = FA_SZ_FROM_VAL(in1)
// -----------------------------------------------------------------
// Return a size according to the floored value of the first argument
//
// Input data:
// in1: string specifying a number .//
//
// Output data:
// opout: string containing the computed result.
//
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

in1num = eval(in1) ;

if ( in1num < 0 )
	opout= '0' ;
else
	opout = string ( floor (abs(in1num))) ;
end 



endfunction 
