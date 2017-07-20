function Test_Erfinv
	disp('Datatype: Double');
	i1 = [12 0.6 -2 -0.75];
	o1 = erfinv(i1);
	disp(o1);
	disp('Datatype: float');
	i2 = float([5 0.35 -1 -.97 -6]);
	o2 = erf(i2);
	disp(o2);
endfunction
