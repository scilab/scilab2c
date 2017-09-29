function test_isequal
	disp('Datatype: Double');
	i1 = [1 2 3];
	i2 = [1 2 3];
	o1 = isequal(i1,i2);
	disp(o1);

	disp('Datatype: Float');
	i3 = float([4 5 6]);
	i4 = float([4 5 6]);
	o2 = isequal(i3,i4);
	disp(o2);

	disp('Datatype: DoubleComplex');
	i5 = [%i*3 %i*3 %i*3];
	i6 = [%i*3 %i*3 %i*3];
	o3 = isequal(i5,i6);
	disp(o3);

	disp('Datatype: uint16');
	i7 = uint16([4 5 6]);
	i8 = uint16([4 5 6]);
	o4 = isequal(i7,i8);
	disp(o4);
endfunction
