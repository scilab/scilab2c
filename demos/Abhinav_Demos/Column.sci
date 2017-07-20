// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function Column()
	a=[1,2,3,4; 5,6,7,8; 98,162,6587,0]
	disp( iscolumn(a))
	disp('')
	b= float(a)
	disp(iscolumn(b))
	c= [1,2,34,5]
	d= uint16(c)
	disp(iscolumn(d))
	disp('')
	f= [1;2;3;4]
	disp(iscolumn(f))
	disp('')
	u= uint16(c)
   	disp(iscolumn(u))
	disp('')
	g= [%i]
	disp(iscolumn(g))
	disp('')
	
endfunction
