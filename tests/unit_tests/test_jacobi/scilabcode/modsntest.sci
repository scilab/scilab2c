function modsntest()
    u=[1+2*%i 2+3*%i 3+1*%i];  // the corresponding complex vector
    k=0.6;                     // parameter of elliptic integral
    [out]=%sn(u,k);
    disp(out);
endfunction
