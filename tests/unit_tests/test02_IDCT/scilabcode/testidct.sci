//SCI2C: DEFAULT_PRECISION= FLOAT
//test for inverse discrete cosine tranfrom
function testidct()
    b=[1 2 3;4 5 6+%i]					//declaring complex matrix
    y=idct(b)						//calling idct
    disp(y)
endfunction
