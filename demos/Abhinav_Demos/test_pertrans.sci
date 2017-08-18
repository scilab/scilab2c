// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_pertrans()	
	a= [1 2 3; 4 5 6; 7 8 9]
	b= pertrans(a)
	disp('Double')
	disp(b)
	disp('')
	disp(pertrans(6))
	disp('')
	c= float(a)
	d=pertrans(c)
	e= float(2)
	disp('Float')
	disp(d)
	disp('')
	disp(pertrans(e))
	disp('')
	f=[%i*121+12; 4+%i*7;1]
	g= pertrans(f)
	disp('Double Complex')
	disp(g)
	disp('')
	disp(pertrans(%i*8712+12))
	disp('')
		
	
endfunction
