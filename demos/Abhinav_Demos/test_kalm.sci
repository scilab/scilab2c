// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_kalm()	
	disp(" ** KALM ** ")
	disp('Double')
	y=[1 2 ; 3 4]
	x0=[4 50; 5 6]
	p0=[4 1 ; 27 8]
	f=[22 0;1 3]
	g= [10.1 2 ; 3 42]
	h=[ 5 23 ;2 1] 
	q= [2 3 ; 12 3]
	rr= [ 21 2 ; 100 91]
	[x1,p1,x,p]= kalm(y,x0,p0,f,g,h,q,rr)
        disp(x1)
        disp(p1)
	disp(x)
	disp(p)

   
	
endfunction
