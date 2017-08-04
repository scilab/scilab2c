// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_hank()	
	seq= [1 21 123 12;11 4 5 6]
        final= hank(2,1,seq);
	//disp(seq)
	disp('')
	disp(final)
	disp('')
	seq1= float([21 1231 1 12; 1231 12 21 2])
	a=float(2)
	b=float(1)
	final1 = hank(a,b, seq1)
        disp('')
	disp(final1)
	disp('')
	
endfunction
