//This is the demo for filt_sinc function
//This function gives the samples of the sinc fuction
function filt_sinctest()
    ni=int(10);  //This is the number of samples
    fc=2;        //This is the cut-off freq. of the assosciated low pass filter
    sd=filt_sinc(ni,fc);
    disp(sd);
endfunction
//output
//
