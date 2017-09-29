function test_wcenter
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6];
	o1 = wcenter(i1,2);
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 3; 4 5 6]);
	o2 = wcenter(i2,2);
	disp(o2);
	disp('Datatype: Double Complex');
	i3 = [0 %i 3+%i; 4 5*%i 0];
	o3 = wcenter(i3,2);
	disp(o3);
endfunction
