function testsva()
    a = [1,2,3,4;5,6,7,8;9,10,11,12]
    [u,s,v] = sva(a)
    disp(u)
    disp(s)
    disp(v)
endfunction
