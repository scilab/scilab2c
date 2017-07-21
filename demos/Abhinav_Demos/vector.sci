// Test file for "vector" function for the data types double, float, double complex.
function vector()
 a=[1,2,3,4]
 disp(isvector(a)) 
 disp('')
 b= %i+2
 disp(isvector(b))
 disp('')
 c= float([1,3,4;1,2,3])
 disp(isvector(c))
 disp('')
 d= [%i*812; %i*12]
 disp(isvector(d))
 disp('')	

endfunction
