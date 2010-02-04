//SCI2C: DEFAULT_PRECISION= DOUBLE

function mainfunction()

M1 = 22.3*ones(3,4);
M2 = 44.5*ones(M1);
v1 = 1:4;
s1 = 3;

//[M1(1,1),M1(1,2)] = twooutputs(1);

M1(3,3) = M2(1,3);

M1(5) = 4;
M1(2,2) = M2(6);

M2(3,2) = s1;

M2(1:4)=11.3*(1:4);
M2(4:7)=M1(3:6);

disp(M1)
disp(M2)
endfunction
