//SCI2C: DEFAULT_PRECISION= FLOAT

//test pow

function mainfunction()
//scalar^scalar
disp(3.2^5.1)
disp(3.2^(5.1+%i*1.4))
disp((2.1+%i*0.3)^6.4)
disp((2.1+%i*0.3)^(5.1+%i*1.4))

//scalar.^scalar
disp(3.2.^5.1)
disp(3.2.^(5.1+%i*1.4))
disp((2.1+%i*0.3).^6.4)
disp((2.1+%i*0.3).^(5.1+%i*1.4))

//scalar^matrice

a=[1.2 6.1 3.6; 1.7 4.9 7.1];
b=a+%i*[1.8 2.9 3.6; 5.5 7.3 4.1];

disp(2.1^a)
disp(2.3^b)
disp((3.5+%i*2.5)^a)
disp((3.5+%i*2.5)^b)

//scalar.^matrice
disp(2.1.^a)
disp(2.3.^b)
disp((3.5+%i*2.5).^a)
disp((3.5+%i*2.5).^b)

//matrix^scalar
//matrice carrée attendue ici
c=[1.2 6.1 ; 4.9 7.1];
d=c+%i*[1.8 2.9 ; 5.5 7.3];
disp(c^3.2)
disp(c^(3.2+%i*5.4))
disp(d^3.2)
disp(d^(3.2+%i*5.4))

//matrix.^scalar
disp(a.^3.2)
disp(a.^(3.2+%i*5.4))
disp(b.^3.2)
disp(b.^(3.2+%i*5.4))


//matrix.^matrix
disp(a.^a)
disp(a.^b)
disp(b.^a)
disp(b.^b)


endfunction
