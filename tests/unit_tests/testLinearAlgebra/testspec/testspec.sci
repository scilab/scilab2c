function testspec()
    A = [1,2,3;4,5,6;7,8,9]
    B = [10,11,12;13,14,15;16,17,18]
    [R,diagevals,c,d] = spec(A,B)
    disp(R)
    disp(diagevals)
    disp(c)
    disp(d)
endfunction
