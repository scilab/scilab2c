// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function Row()
	a=[1,2,3,4; 5,6,7,8; 98,162,6587,0]
	disp( isrow(a))
	disp('')
	b= float(a)
	disp(isrow(b))
	c= [1,2,34,5]
	d= uint16(c)
	disp(isrow(d))
	disp('')
	f= [1;2;3;4]
	disp(isrow(f))
	disp('')
	u= uint16(c)
   	disp(isrow(u))
	disp('')
	g= [%i*1; 7]
	disp(isrow(g))
	disp('')
endfunction
