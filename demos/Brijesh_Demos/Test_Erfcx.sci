function Test_Erfcx
	disp('Datatype: Double');
	i1 = [.75 .8 -.32];
	o1 = erfcx(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 .5; 7 .8 .9]);
	o2 = erfc(i2);
	disp(o2);
endfunction
