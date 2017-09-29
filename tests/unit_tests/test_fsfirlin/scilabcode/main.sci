//This is the demo file to test the function fsfirlin
//The function gives design of FIR,linear phase filters using frequency sampling technique
function main()
	in=[1 2 3 4 5 6 7 8];   //This is the vector of desired frequency responses samples
        flg=2;                 //flg=2 for type-2 filter , it can be 1 for type-1 filter
        op=fsfirlin(in,flg);
        disp(op);
endfunction
//output
