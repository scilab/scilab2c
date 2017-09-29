// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_strange()	
	seq= [1 2.01 400.0; 10.912 5 9.81; 3.21 8.921 100.0]
        a= strange(seq);
	b= strange(seq, 'r');
	c= strange(seq, 'c');
	disp('Double')
	disp(a)
	disp('')
	disp(b)
	disp('')
	disp(c)
	disp('')
	seq1= float(seq);
        disp('')
        f= strange(seq1);
	g= strange(seq1, 'r');
	h= strange(seq1, 'c');
	disp('Float')
	disp(f)
	disp('')
	disp(g)
	disp('')
	disp(h)
	disp('')
	seq2= uint16(seq);
        k= strange(seq2);
	l= strange(seq2, 'r');
	m= strange(seq2, 'c');
	disp('Uint16')
	disp(k)
	disp('')
	disp(l)
	disp('')
	disp(m)
	disp('')

	
endfunction
