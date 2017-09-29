function test_moment
	disp('Datatype: Double');
	i1 = [1 2 3; 4 5 6];
	o1 = moment(i1,1,'r');
	disp(o1);
	disp('Datatype: float');
	i2 = float([1 2 3; 4 5 6]);
	o2 = moment(i2,1,'r');
	disp(o2);
	disp('Datatype: Double Complex');
	i3 = [0 %i 3+4*%i;%i 5+%i 6+%i];
	o3 = moment(i3,1,'r');
	disp(o3);
endfunction
