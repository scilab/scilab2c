// Test file for "Column" function for the data types double, float, double complex, string , uint16.
// All the below statements are added to initialize variables in different data types 
//The function written doesn't work for string or character scalar as of now.


function test_gsort()	
	seq= [1 21 4; 10 5 98; 3.21 8.921 1000]
	disp(seq)
	disp('')
        a= gsort(seq);
	b= gsort(seq, 'r');
	c= gsort(seq, 'c');
	d= gsort(seq, 'r', 'i');
	e= gsort(seq, 'c', 'd');
	disp('Double')
	disp(a)
	disp('')
	disp(b)
	disp('')
	disp(c)
	disp('')
	disp(d)
	disp('')
	disp(e)
	disp('')
	seq1= float(seq);
        disp('')
        f= gsort(seq1);
	g= gsort(seq1, 'r');
	h= gsort(seq1, 'c');
	i= gsort(seq1, 'r', 'i');
	j= gsort(seq1, 'c', 'd');
	disp('Float')
	disp(f)
	disp('')
	disp(g)
	disp('')
	disp(h)
	disp('')
	disp(i)
	disp('')
	disp(j)
	disp('')
	seq2= uint16(seq);
        disp('')
        k= gsort(seq2);
	l= gsort(seq2, 'r');
	m= gsort(seq2, 'c');
	n= gsort(seq2, 'r', 'i');
	o= gsort(seq2, 'c', 'd');
	disp('Uint16')
	disp(k)
	disp('')
	disp(l)
	disp('')
	disp(m)
	disp('')
	disp(n)
	disp('')
	disp(o)
	disp('')
	seq3= [%i*21, 65+%i*7, %i*121, 56; %i*6112, 12 ,3, 0]
        disp('')
        p= gsort(seq3);
	q= gsort(seq3, 'r');
	r1= gsort(seq3, 'c');
	s= gsort(seq3, 'r', 'i');
	t= gsort(seq3, 'c', 'd');
	disp('Double Complex')
	disp(p)
	disp('')
	disp(q)
	disp('')
	disp(r1)
	disp('')
	disp(s)
	disp('')
	disp(t)
	disp('')
	
endfunction
