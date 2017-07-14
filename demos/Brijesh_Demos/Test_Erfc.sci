function Test_Erfc
	disp('Datatype: Double');
	i1 = [1 2 .5; 7 .8 .9];
	o1 = erfc(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 .5; 7 .8 .9]);
	o2 = erfc(i2);
	disp(o2);
endfunction
