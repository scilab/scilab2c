function test_gamma
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6];
	o1 = gamma(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 3; 4 5 6]);
	o2 = gamma(i2);
	disp(o2);
endfunction
