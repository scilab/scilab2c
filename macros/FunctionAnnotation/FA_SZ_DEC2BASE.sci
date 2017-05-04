function opout = FA_SZ_DEC2BASE(in1val,in2val)

// 07-Sep-2016 -- Author : Shamik Guha


in1val=string(in1val);
in2val=string(in2val);
if (isnum(in1val)) then
    in1_num = eval(in1val) ;
    in2_num = eval(in2val) ;
    out=dec2base(in1_num,in2_num);
    //disp(out);

else
    error(36, "Wrong input argument "+in1val+".");

end
if (in2_num>10) then
	out=sci2exp(out);
	opout=string(length(out)-2);
	//disp(opout);
	out=string(out);
else
	out=eval(out);
	//disp(out);
	opout=string(floor(log10(abs(out)+1))+1);
	//disp(opout);
	out=string(out);
end
endfunction 
