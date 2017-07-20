function deviation()

a=[ 211.128 2912 4.12 123 ; 53211 12.312 21 0]
disp('Double')

disp(mad(a, 'r'))
disp('')

disp(mad(a, 'c'))
disp('')

disp(mad(a))
disp('')

disp('Float')

b= float(a)
disp(mad(b, 'r'))
disp('')

disp(mad(b, 'c'))
disp('')

disp(mad(b))
disp('')


disp('DoubleComplex')

c= [%i*971+ 231, 87+%i*16, 2400+%i*1721; 981,0, %i*1213]
disp(mad(c, 'r'))
disp('')

disp(mad(c, 'c'))
disp('')

disp(mad(c))
disp('')

endfunction

