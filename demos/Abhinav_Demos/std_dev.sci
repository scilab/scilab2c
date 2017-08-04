// Test file for "Column" function for the data types double, float, double complex, string.
// All the below statements are added to initialize variables in different data types 


function std_dev()
	a=[1,2,3,4; 5,6,7,8; 98,162,6587,0]
	disp('Double')
	disp(stdev(a))
	disp('')
	disp(stdev(a,'r'))
	disp('')
	disp(stdev(a,'c'))
	b=float(a)
	disp('Float')
	disp(stdev(b))
	disp('')
	disp(stdev(b,'r'))
	disp('')
	disp(stdev(b,'c'))
endfunction
