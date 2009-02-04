//SCI2C: DEFAULT_PRECISION= FLOAT

function mainfunction()

s1=eye(1);//teste s0eyes0
s2=eye(4+3*%i);//teste c0eyec0
s3=eye(2,2);//teste s0s0eyes2
s4=eye(3,2);//teste s0s0eyes2
a=[1 2 3 ; 4 5 6]
s5=eye(a);//teste s2eyes2
b=[1 2 3 ; 4 5 6]+%i*[1 2 3 ; 4 5 6]
s6=eye(b)//teste c2eyec2

disp(s1);
disp(s2);
disp(s3);
disp(s4);
disp(s();

endfunction
