function test_isinf
	disp('Datatype: Double');
	i1 = %inf;
	o1 = isinf(float(i1));
	disp(o1);
endfunction
