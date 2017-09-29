
// Test file for "ismatrix" function for the data types double, float, double complex, uint16, string

function is_matrix()
	disp('Double')
	a= [1 ,25, 52]
	disp(ismatrix(a))
	disp('')
	b=1.2131
	disp(ismatrix(b))
	disp('')
	
	disp('Float')
	c=float(a)
	disp(ismatrix(c))
	disp('')
	d=float(b)
	disp(ismatrix(d))
	disp('')

	disp('String')
	e= ['af' 'as' '12'; '121' 'king' 'queen' ]
	disp(ismatrix(e))
	disp('')
	f='Light'
	disp(ismatrix(f))
	disp('')

	disp('doubleComplex')
	g=[%i*2; %i*91+100]
	disp(ismatrix(g))
	disp('')
	h= %i*98.12 + 121
	disp(ismatrix(h))
	disp('')

	disp('Uint16')
 	i= [12, 231 ,213, 123]
	disp(ismatrix(i))
	disp('')
endfunction
