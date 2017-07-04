function outp=FA_SZ_AMELL(in1sz)
	in1sz=string(in1sz);
	insz=eval(in1sz);
	if(insz>1) then
		outp=string(insz);
	else
		outp="1";
	end
endfunction
