//SCI2C: DEFAULT_PRECISION= FLOAT


function mainfunction()
s5 = [ 1 ; 2+%i; 2; 4; 5 ] 
s6 = find(s5==1)
disp(s6)

s7 = [1 ; 2+%i; 1; 1; 5 ] 
s8 = find(s7==1)
disp(s8)


s9 = [ 1 ; 2; 2+%i; 4; 5 ] 
s10 = find(s9==1)
disp(s10)

s11 = [1 ; 2; 1+%i; 1; 5 ] 
s12 = find(s11==1)
disp(s12)


s13 = [ 1+%i ; 2; 2+%i; 4; 5 ] 
s14 = find(s13==2)
disp(s14)

s15 = [1+%i ; 2; 1+%i; 2; 2 ] 
s16 = find(s15==2)
disp(s16)
s17 = [ 1+%i ; 2+%i; 2+%i; 4; 5 ] 
s18 = find(s17==2+%i)
disp(s18)

s21 = [1+%i ; 2; 1+%i; 2; 2 ] 
s22 = find(s21==7)
disp(s22)

s19 = [1+%i ; 2+%i; 1+%i; 2; 2 ] 
s20 = find(s19==2+%i)
disp(s20)

s1 = [ 1 ; 2; 3; 4; 5 ] 
s2 = find(s1==1)
disp(s2)

s3 = [ 1 ; 2; 1; 1; 5 ] 
s4 = find(s3==1)
disp(s4)

endfunction
