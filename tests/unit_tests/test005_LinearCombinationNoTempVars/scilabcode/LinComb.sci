//SCI2C: NIN=          6
//SCI2C: NOUT=         1
//SCI2C: OUT(1).TP=    IN(1).TP
//SCI2C: OUT(1).SZ(1)= IN(2).SZ(1)
//SCI2C: OUT(1).SZ(2)= IN(2).SZ(2)

//SCI2C: DEFAULT_PRECISION= DOUBLE

function z = LinComb(a,x,b,y,t1,t2)

t1 = a*x;
t2 = b*y;
z = t1+t2;
// z = a*x+b*y;

endfunction
