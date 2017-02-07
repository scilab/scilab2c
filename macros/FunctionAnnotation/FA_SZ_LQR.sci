function outsize = FA_SZ_LQR(inval)

	inval = eval(inval)
	outsize(1) = string(int(inval));
    outsize(2) = string(modulo(inval*10,10));
 endfunction 
