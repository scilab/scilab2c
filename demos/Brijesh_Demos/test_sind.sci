function test_sind
	disp('Datatype: Double');
	i1 = [0 30 45; 60 80 120] ;
	o1 = sind(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([0 30 45; 60 80 120]);
	o2 = sind(i2);
	disp(o2);
endfunction
