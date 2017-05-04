function opout = FA_SZ_DEC2BIN(inval)

// 07-Sep-2016 -- Author : Shamik Guha

inval=string(inval);
if (isnum(inval)) then
    in_num = eval(inval) ;
    out=dec2bin(in_num);
    //disp(out);

else
    error(36, 'Wrong input argument '+inval+'.');

end

out=eval(out);

opout=string(floor(log10(abs(out)+1))+1);
out=string(out);
endfunction 
