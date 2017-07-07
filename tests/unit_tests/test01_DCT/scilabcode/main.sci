//SCI2C: DEFAULT_PRECISION= FLOAT
//test for discrete cosine tranform using precision as float
function main()
    b=([5 2 6 7;1 9 7 6+%i])
    y=dct(b,1)        			//calling dct
    disp(y)
endfunction
