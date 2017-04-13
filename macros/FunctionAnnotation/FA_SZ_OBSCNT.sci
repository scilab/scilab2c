function outsize = FA_SZ_OBSCNT(inval,insz1,insz2,nout)

	inval = eval(inval);
	insz1 = eval(insz1);
	insz2 = eval(insz2);
	//nout = eval(nout);
	no_of_st = int(inval);
	no_of_in = insz2 - no_of_st;
	no_of_op = insz1 - no_of_st;
	if(nout == 1)
		outsize(1) = string(no_of_st+no_of_op+2);
    	outsize(2) = string(no_of_st+no_of_in);
    else
    	outsize(1) = string(no_of_st+no_of_in+no_of_op+2);
    	outsize(2) = string(no_of_st+no_of_in+no_of_op);   
    end 		
endfunction 
