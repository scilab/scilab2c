//SCI2C: NIN=          1
//SCI2C: NOUT=         1
//SCI2C: OUT(1).TP=    IN(1).TP
//SCI2C: OUT(1).SZ(1)= '1'
//SCI2C: OUT(1).SZ(2)= '1'

//SCI2C: DEFAULT_PRECISION= DOUBLE
function out = fun2(in1)
a = 999;
disp("a");
disp(a);
b = fun1(1);
out = 99;
endfunction
