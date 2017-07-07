function main()

	order=5;
	sample1=[1:5];
        frq=2.2;
    	out1=buttmag(order,frq,sample1);
    	disp(out1); 

        wfc=3;
        eps=0.3;
        sample2=[1:5];
        out2=cheb1mag(order,wfc,eps,sample2);
        disp(out2);
        
	eps1=0.2;
        m11=0.4;
        z1=[1,2,3];
        [s1]=ell1mag(eps1,m11,z1);
        disp(s1);
endfunction
