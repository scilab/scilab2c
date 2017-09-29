function test_log2
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6];
	o1 = log2(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 3; 4 5 6]);
	o2 = log2(i2);
	disp(o2);
	disp('Datatype: Double Complex');
	i3 = [5*%i+6, 3; 1 %i];
	o3 = log2(i3);
	disp(o3);
endfunction
