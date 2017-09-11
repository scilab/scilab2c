// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_mvcorrel()	
	disp(" ** mvcorrel ** ");
	disp('Double');
	a=[1;0;3;4;5;4;0];
	b= mvcorrel(a);
	disp(b);
	disp('')
	c=[1 0 3; 4 5 8; 1 10 25];
	d=mvcorrel(c)
	disp(d)
	disp('')
	e=mvcorrel(1)
	disp(e)
	disp('Float');
	f=float([1;0;3;4;5;4;0]);
	g= mvcorrel(f);
	disp(g);
	disp('')
	h=float([1 0 3; 4 5 8; 1 10 25]);
	i=mvcorrel(h)
	disp(i)
	disp('')
	j= float(4)
	k=mvcorrel(j)
	disp(k)
endfunction
