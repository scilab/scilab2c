// Test file for "Column" function for the data types double, float, double complex, string.
// All the below statements are added to initialize variables in different data types 


function square()
	a=[1,2,3,4; 5,6,7,8; 98,162,6587,0]
	disp(issquare(a))
	disp('')
	b= [%i+25, 1, %i*5+12]
	disp(issquare(b))
	disp('')
	
endfunction
