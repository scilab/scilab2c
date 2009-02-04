//SCI2C: DEFAULT_PRECISION= DOUBLE

function mainfunction()

//test isempty


disp(isempty(4));
disp(isempty(3+%i*4));

c=[1 5 4 8; 2 9 4 5; 3 6 4 7]
d=[1 5+%i*4 4 8+%i; 2-%i*3 9+%i*7 4+%i*2 5; 3 6 4 7-%i]

disp(isempty(c));
disp(isempty(d));
disp(isempty([]));
endfunction
