function testhess()
    a = [0,0,0,0;0,6,7,8;9,10,11,12;13,14,15,16];
    h = hess(a)
    disp(h)
endfunction
