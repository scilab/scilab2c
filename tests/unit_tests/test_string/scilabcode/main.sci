//This is the demo function to test a set of string functions
// ascii->converts the input char vector/array to corresponding ascii code or vice versa
// strchr-> it finds the occurence of a charcter in a given string
// strncpy->copy charcters from string
// strspn-> get span of character set in string

function main()
	strascii1="ankit is raj";  //This is the input string for testing the function.
    	asciiout1=ascii(strascii1);       //calling of the function
    	disp(asciiout1);

	strascii2=[97 98 99 100 101];  //Input as the ascii code to get converted to string
    	asciiout2=ascii(strascii2);           //calling the function
    	disp(asciiout2);

	str="This is a sample string";  
        ch="s";
    	out1=strchr(str,ch);
    	disp(out1);
	
	ss="Ankit Raj";
        nn=5;
        resu=strncpy(ss,nn);
        disp(resu);

    	strsample2="Hello this is Ankit";
        a="Ank";
        oup2=strspn(a,strsample2);
    	disp(oup2)
endfunction
