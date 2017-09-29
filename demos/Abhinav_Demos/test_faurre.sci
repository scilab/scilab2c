// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_faurre()	
	disp(" ** faurre ** ")
	disp('Double')
	n=3
	H= [ 2 1 1 ; 12 3 7; 5 1 2 ]
	F=[ 0 2 21 ; 2 5.1 1; 5 6 1]
	G=[ 1 2 21 ; 3 20 6; 5 6 7 ]
	R0=[6 7 2; 51 1 2; 1 2 3]
	[P R T]= faurre(n,H,F,G,R0)
	disp(P)
	disp('')
	disp(R)
	disp('')
	disp(T) 
	disp('')  
	
endfunction
