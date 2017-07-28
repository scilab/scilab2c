// Test file for "nthroot" function for the data types double, float, double complex.


function nth_root()
	b= [1,2,3,4;5,6,7,8]
	c=[45,12,4,12; 23,34,5,6]
	d= nthroot(b,c)
disp(d)
disp('')
e=34
f= nthroot(b,e)
disp(f)
disp('')
k=nthroot(3.2123,12)
disp(k)
disp('')

m= float(b)
l= float(c)
disp(nthroot(m,l))


endfunction
