function out2sz = FA_SCHUR_SZ(in2tp,in1sz)

in2type = string(in2tp);
in1sz = string(in1sz);
in1dim = eval(in1sz);

if(in2type == 'g')
	out2sz = '1'
else
	out2sz = string(in1dim)
end

endfunction 
