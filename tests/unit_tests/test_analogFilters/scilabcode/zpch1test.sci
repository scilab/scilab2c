function zpch1test()

    N=5;         //N is the filter order
    e=0.5;       //e (epsilon) it is the ripples in pass band
    wc=4;        // wc cutoff frequency 
    [p,g]=zpch1(N,e,wc);
    disp(p);
    disp(g);
endfunction
