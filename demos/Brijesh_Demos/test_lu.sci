function test_lu
	disp('Datatype: Double');
	i1 = [1 2 ;3 4 ;5 6;3 4 ;5 6; 7 8];
	[o1, o2] = lu(i1);
	disp(o1);
	disp(o2);
	//disp('Datatype: float');
	//i2 = float([1 2 3; 4 5 6]);
	//o2 = gamma(i2);
	//disp(o2);
endfunction
