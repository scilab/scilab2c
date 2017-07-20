
// Test file for "nonzero" function for the data types double, float, double complex, uint16

function nonzero()
	a=[12,4,4; 12,51,6]  // double array  
	disp(nnz(a))
      	b=0                  //double scalar
	disp(nnz(b))
	f= float(a)          //float array
	disp(nnz(f))
	z=%i*2+0             // doubleComplex scalar
	disp(nnz(z))
	
 	
endfunction
