function test_cross
	disp('Datatype: Double');
	i1 = [1 2;3 4;5 6];
	i2 = [7 8;9 10;11 12];
	o1 = cross(i1,i2);
	disp(o1);

	disp('Datatype: DoubleComplex');
	i3 = [1+1*%i 2+2*%i;3+3*%i 4+4*%i;5+5*%i 6+6*%i];
	i4 = [7+7*%i 8+8*%i;9+9*%i 10+10*%i;11+11*%i 12+12*%i];
	o2 = cross(i3,i4);
	disp(o2);

	disp('Float');	
	i5 = float([1 2;3 4;5 6]);
	i6 = float([7 8;9 10;11 12]);
	o3 = cross(i5,i6);
	disp(o3);

	disp('Datatype: uint8');
    	i7 = uint8([1 2;3 4;5 6]);
    	i8 = uint8([7 8;9 10;11 12]);
    	o4  = cross(i7,i8);
    	disp(o4);

	disp('Datatype: int8');
    	i9 = int8([1 2;3 4;5 6]);
    	i10 = int8([7 8;9 10;11 12]);
    	o5  = cross(i9,i10);
    	disp(o5);

	disp('Datatype: uint16');
    	i11 = uint16([1 2;3 4;5 6]);
    	i12 = uint16([7 8;9 10;11 12]);
    	o6  = cross(i11,i12);
    	disp(o6);

	disp('Datatype: int16');
    	i13 = int8([1 2;3 4;5 6]);
    	i14 = int8([7 8;9 10;11 12]);
    	o7  = cross(i13,i14);
    	disp(o7);

endfunction
