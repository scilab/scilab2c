//SCI2C: DEFAULT_PRECISION= DOUBLE

function mainfunction()

//test max && min

//reals

disp(norm(3))
disp(max(3,1))
disp(max(3,2))


disp(min(7))
disp(min(7,1))
disp(min(7,2))

a=[4 -2 4 8;-3 4 5 -1;1 -4 5 6; -7 -4 5 3]


disp(max(a))
disp(max(a,1))
disp(max(a,2))

disp(min(a))
disp(min(a,1))
disp(min(a,2))


endfunction
