// The main function test the ffilt function
// ffilt->returns the coefficients of FIR low pass filter
function main()
	ft="sb";    //ft is the type of filter
        ni=5;       //ni is the number of filters sample required
        fc=0.2;     //low frequency cutoff
        fh=0.9;     //high cutoff frequency
        xi=ffilt(ft,ni,fc,fh);
        disp(xi);
endfunction
//output
// 0.2449143    0.4898285  - 0.4    0.4898285    0.2449143  
