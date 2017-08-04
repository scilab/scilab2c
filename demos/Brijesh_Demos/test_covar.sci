function test_covar
	disp('Datatype: Double');
	i3 = [1 2 3 4 5 6];
	i4 = [1 2];
	fre = [1 2 ;3 4; 5 6; 7 8; 9 1; 2 3];
	o2 = covar(i3,i4,fre);
	disp(o2);
	disp('Datatype: float');
	i7 = float([1 2 3 4 5 6]);
	i8 = float([1 2]);
	ffre = float([1 2 ;3 4; 5 6; 7 8; 9 1; 2 3]);
	o4 = covar(i7,i8,ffre);
	disp(o4);
	disp('Datatype: DoubleComplex');
	i11 = [1 2 %i 4 6+6*%i 5];
	i12 = [1 %i];
	zfre = [1 %i ;3 0; 5 6*%i; 7 8; 9 1; 2 3];
	o6 = covar(i11,i12,zfre);
	disp(o6);
endfunction
