function test_center
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6];
	o1 = center(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 3; 4 5 6]);
	o2 = center(i2);
	disp(o2);
	disp('Datatype: Double Complex');
	i3 = [0 %i 3+%i; 4 5*%i 0];
	o3 = center(i3);
	disp(o3);
endfunction
