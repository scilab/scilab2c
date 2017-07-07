function testsvd()
    disp(" ** SVD Function (Singular Value Decomposition)** ")
    A = [1,2,3,11;4,5,6,12;7,8,9,13] // Matrix - A
    [s = svd(A)               // Calling Function Sequence 
    disp(s)
endfunction
