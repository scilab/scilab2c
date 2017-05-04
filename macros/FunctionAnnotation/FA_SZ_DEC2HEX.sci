function opout = FA_SZ_DEC2HEX(inval)

// 07-Sep-2016 -- Author : Shamik Guha

inval=string(inval);
if (isnum(inval)) then
    in_num = eval(inval) ;
    out=dec2hex(in_num);
    //disp(out);

else
    error(36, 'Wrong input argument '+inval+'.');

end

out=sci2exp(out);

opout=string(length(out)-2);
//disp(opout);
out=string(out);
endfunction 
