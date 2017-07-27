function test_nanmin
	disp('Datatype: Double');
	i1 = [ 1 2 %nan; 3 %nan -4; %nan 5 6];
	//[o1, p1] = nanmin(i1,'c');
	o1 = nanmin(i1);
	disp(o1);
	//disp(p1);
        //disp('Datatype: Float');
	//i2 = float([1 %nan;3 4;5 %nan]);
	//o2 = nanmean(i2,'r');
	//disp(o2);
endfunction
