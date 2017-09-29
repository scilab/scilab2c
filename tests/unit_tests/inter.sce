//test for interp1
function inter()
    x=linspace(1,3,3)  //declaring a 1-D array 
    disp(x)
    y=x.^2            //values for y at equivalent value for x
    disp(y)
    xx=linspace(1,2,4)  // new points for that we have too find values using interpolation
    disp(xx)
    yy1=interp1(x,y,xx)  //calling interp1
    disp(yy1)
endfunction
