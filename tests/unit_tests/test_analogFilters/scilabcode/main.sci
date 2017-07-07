// This is the demo function to test the analog filters
// They are of 4 types butterworth,chebyshev-1,chebyshev-2 and elliptic
// We are going to test here the butterworth, chebyshev-1 and chebyshev-2 filters
//zpbutt->butterworth filter
//zpch1 ->chebyshev type-1 filter
//zpch2 ->chebyshev type-2 filter
function main()
	n=5;		      //n is the filter order
        fl=3;                 //fl is the cutoff frequency
        [pb,gb]=zpbutt(n,fl);
	disp("poles of butterworth filter")
        disp(pb);
	disp("gain of butterworth filter");
        disp(gb);

        e=0.5;               //e (epsilon) it is the ripples in pass band
        wc=4;                // wc cutoff frequency 
        [pc1,gc1]=zpch1(n,e,wc);
	disp("poles of chebyshev-1 filter")
        disp(pc1);
	disp("gain of chebyshev-1 filter")
        disp(gc1);

        a=4;		     //a is the attenuation in stop band
        w=5;                 //w (omega) is the cutoff frequency
        [zc2,pc2,gc2]=zpch2(n,a,w);
	disp("zeros of chebyshev-2 filter")
        disp(zc2);
	disp("poles of chebyshev-2 filter")
        disp(pc2);
	disp("gain of chebyshev-2 filter")
        disp(gc2);
endfunction
