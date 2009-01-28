//SCI2C: DEFAULT_PRECISION= FLOAT
function mainfunction()

a=[1 2 3 4; 5 6 7 8; 9 1 2 3; 4 5 6 7; 8 9 1 2]

disp(acosh(a))


b=acosh(.10)
disp(b)

c=a/10
disp(acosh(c));

d=acosh(2+3*%i)
disp(d)

disp(acosh(c+%i));

endfunction
