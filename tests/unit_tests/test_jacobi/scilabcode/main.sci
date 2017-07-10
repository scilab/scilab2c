// Demo function to test %sn and %k functions
// %sn is the Jacobi's elliptic function
// %k is the Jacobi's complete integral
function main()
	u=[1+2*%i 2+3*%i 3+1*%i];  // the corresponding complex vector
        k=0.6;                     // parameter of elliptic integral
        [out]=%sn(u,k);
        disp(out);
	m=[0.1 0.2 0.3];	   // parametrt of Jacobi complete integral
        s=%k(m);
        disp(s);
endfunction

//Output
//for %sn
// 1.5641568 - 0.2037920i    1.0580372 + 0.0100213i    1.1386855 - 0.4631921i  
// for %k
// 1.6124413    1.6596236    1.7138894 
