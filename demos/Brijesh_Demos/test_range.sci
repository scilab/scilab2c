function test_range
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6; 7 8 9];
	i2 = 4;
	[o1, o2] = range(i1, i2);
	disp(o1);
	disp(o2);
endfunction
