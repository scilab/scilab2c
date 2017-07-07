function testsvdeconomy()
    disp(" ** SVD Function (Singular Value Decomposition)** ")
    A = [1,2,3,11;4,5,6,12;7,8,9,13] // Matrix - A
    [u,s,vt] = svd(A,'e')               // Calling Function Sequence 
    disp("U  Matrix")           
    disp(u)                         // A = U*sigma*Vt
    disp("Sigma  Matrix")
    disp(s)
    disp(" V transpose ")
    disp(vt)
endfunction
