function test_nanmean
	disp('Datatype: Double');
	i1 = [1 %nan;3 4;5 %nan];
	o1 = nanmean(i1,'r');
	disp(o1);
        disp('Datatype: Float');
	i2 = float([1 %nan;3 4;5 %nan]);
	o2 = nanmean(i2,'r');
	disp(o2);
	disp('Datatype: Double complex');
	i3 = [1 %nan %i;3 4+1*%i %nan;5 %nan %i];
	o3 = nanmean(i3,'c');
	disp(o3);
endfunction
