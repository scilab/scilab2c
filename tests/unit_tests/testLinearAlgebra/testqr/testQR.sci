function testQR()
    A = [1,2,3;4,5,6]
    [u,a,rk,e] = qr(A);
    disp(u)
    disp(a)
    disp(rk)
    disp(e)
endfunction
