function nan_sum ()
    x= [1 %nan 1 0.8; 21 1 13 %nan]	
	disp('Double')
	a= nansum(x)
	disp(a)
	disp('')
	b= nansum(x, 'r')
	disp(b)
	disp('')
	c= nansum(x,'c')
	disp(c)
	disp('')
    y= float(x)
	disp('Float')
	d= nansum(y)
	disp(d)
	disp('')
	e= nansum(y, 'r')
	disp(e)
	disp('')
	f= nansum(y,'c')
	disp(f)
	disp('')
    z= [%nan , 12, 1219, %nan + %i*121; 121 %nan 90 12]
	disp('DoubleComplex')
	g= nansum(z)
	disp(g)
	disp('')
	h= nansum(z, 'r')
	disp(h)
	disp('')
	i= nansum(z,'c')
	disp(i)
	disp('')
endfunction
