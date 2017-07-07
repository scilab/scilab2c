function cheb1magtest()
    od=5;
    wfc=3;
    eps=0.3;
    sap=[1:5];
    out=cheb1mag(od,wfc,eps,sap);
    disp(out);
endfunction
