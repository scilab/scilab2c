function test_calerf
	disp('Datatype: Double');
	i1 = [0.9 .754; .32 -.84];
	o1 = calerf(i1,0);
	disp(o1);
	disp(" ");
	o2 = calerf(i1,1);
	disp(o2);
	disp(" ");
	o3 = calerf(i1,2);
	disp(o3);
	disp(" ");
	disp('Datatype: float');
	i2 = float([0.9 .754; .32 -.84]);
	o4 = calerf(i2,2);
	disp(o4);
	disp(" ");
endfunction
