// Test file for "isscalar" function for the data types double, float, double complex.
function scalar()
 a=[1,2,3,4]
 disp(isscalar(a))
 b= float(a)
 disp(isscalar(b)) 
 c= %i*2+34
 disp(isscalar(c))
 


endfunction
