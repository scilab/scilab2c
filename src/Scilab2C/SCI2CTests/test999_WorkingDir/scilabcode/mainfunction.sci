//SCI2C: DEFAULT_PRECISION= DOUBLE

function mainfunction()

s1 = 2; s2 = 3;

a = 2; b = 4;

A = ones(3,4); B = ones(3,4);

C = LinComb(s1,a,s2,b); // s1*a+s2*b
D = LinComb(s1,A,s2,B); // s1*A+s2*B

disp(C);
disp(D);
endfunction
