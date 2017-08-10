function test_ndgrid
	disp('Datatype: Double');
	i1 = linspace(-1,1,10);
	i2 = linspace(-1,1,3);
	[o1, o2] = ndgrid(i1,i2);
	disp(o1);
	disp(o2);
	disp('Datatype: float');
	i3 = linspace(-1,1,10);
	i4 = linspace(-1,1,3);
	[o3, o4] = ndgrid(float(i3),float(i4));
	disp(o3);
	disp(o4);
	disp('Datatype: Double Complex');
	i5 = [1 %i 3];
	i6 = [%i 3+%i 5*%i 9 7 0];
	[o5, o6] = ndgrid(i5,i6);
	disp(o5);
	disp(o6);
endfunction
