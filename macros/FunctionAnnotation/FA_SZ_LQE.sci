function outsize = FA_SZ_LQE(inval,insz)

	inval = eval(inval)
	insz = eval(insz)
	outsize(1) = string(int(inval));
    outsize(2) = string(insz-int(inval));

endfunction 
