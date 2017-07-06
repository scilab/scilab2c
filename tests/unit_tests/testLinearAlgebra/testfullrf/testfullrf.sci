function testfullrf()
    A = [1,2,3;4,5,6;7,8,9]
    [Q,M,rk] = fullrf(A)
    disp(Q)
    disp(M)
    disp(rk)
endfunction
