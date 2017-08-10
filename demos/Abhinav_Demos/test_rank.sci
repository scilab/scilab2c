// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_rank()	
    disp(" ** RANK ** ")
    disp('Double')
    A = [1,2,3,11;4,5,0.1,2.12;7,0,0,16.11] // Matrix - A
    s = rank(A)               // Calling Function Sequence 
    disp(s)
    disp('')

    disp('Double Complex')
    B= [%i*12, 12 , 12; 98*%i , 24*%i, 0; 12, %i*12, 0];
    t= rank(B)
    disp(t)
    disp('')
	
endfunction
