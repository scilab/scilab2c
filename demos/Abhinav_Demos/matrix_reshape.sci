
// Test file for "matrix" function for the data types double, float, double complex, uint16

function matrix_reshape()
	a=[1,2,3,4;5,6,7,8;8,9,1,2]
	b=float(a)
	c= uint16(b)
	d=[%i*2,3,4,5;%i+34,45,32,23; 1,%i*54,8690,1]
	
double1= matrix(a,4,3)
float1= matrix (b,4,3)
uint161= matrix(c,4,3)
complex1= matrix(d,4,3)
disp( double1)
disp( float1)
disp( uint161)
disp( complex1)
endfunction
