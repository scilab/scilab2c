function testrcomp()
    A = [1,2,3;4,5,6]
    [u,rk] = rowcomp(A,"qr")
    disp(u)
    disp(rk)
endfunction
