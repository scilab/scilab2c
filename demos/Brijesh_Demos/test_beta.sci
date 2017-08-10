function test_beta
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6];
	i2 = [7 8 9; 10 11 12];
	o1 = beta(i1,i2);
	disp(o1);
	disp('Datatype: float');
	i3 = float([1 2 3; 4 5 6]);
	i4 = float([7 8 9; 10 11 12]);
	o2 = beta(i3,i4);
	disp(o2);
endfunction
