//SCI2C: DEFAULT_PRECISION= DOUBLE

function mainfunction()

s1 = 2; s2 = 3;

a = 2; b = 4;

A = ones(3,4); B = ones(3,4);

t1 = 0;
t2 = 0;
C = LinComb(s1,a,s2,b,t1,t2); // s1*a+s2*b

T1 = A;
T2 = A;
D = LinComb(s1,A,s2,B,T1,T2); // s1*A+s2*B

disp(C);
disp(D);
endfunction
