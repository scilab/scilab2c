function test_scaling
	disp("Data Type: Double");
	i1 = [1 2 3; 4 5 6];
	i2 = [5 5];
	o1 = scaling(i1, 10, i2);
        disp(o1);
	disp("Data Type: Float");
	o2 = scaling(float(i1), 10, float(i2));
        disp(o2);
	disp("Data Type: Double Complex");
	i3 = [1 2+%i %i*3; 4 0 6];
	i4 = [5*%i 0];
	o3 = scaling(i3, %i, i4);
        disp(o3);
endfunction
