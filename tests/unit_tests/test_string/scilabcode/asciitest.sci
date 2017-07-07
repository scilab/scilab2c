//This function test the ascii function in scilab.
//Ascii function takes the input string and then gives the ascii code of the string.
// The output for the scilab will be:-
//[97.    110.    107.    105.    116.    32.    105.    115.    32.  114.    97.    106.] 
 
function asciitest()
    y="ankit is raj";  //This is the input string for testing the function.
    x=ascii(y);       //calling of the function
    disp(x);
endfunction

