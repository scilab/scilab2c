#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "wcenter.h"
#include "doubleComplex.h"
#include "sqrt.h"

void zwcentera (doubleComplex* inp, int row, int col, doubleComplex* out)
{
    doubleComplex sum = 0, xbar = 0, sigma = 0;
    for(int i = 0; i < row*col; i++)		// Findinag the maen of all the elements of the matrix
        sum = zadds(sum,inp[i]);
    xbar = zrdivs(sum,(row*col));
    
    doubleComplex one[row*col];			// Creating a matrix of ones
    zonesa(one,row,col);

    doubleComplex prod[row*col];
    for(int i = 0; i < row*col; i++)		// Applying the formula (x(i,j)-xbar)/sigma
        prod[i] = zmuls(one[i],xbar);

    for(int i = 0; i < row*col; i++)
        out[i] = zdiffs(inp[i], prod[i]);

    sum = DoubleComplex(0,0);
    for(int i = 0; i < row*col; i++)
        sum =  zadds(sum, zmuls(out[i],out[i]));

    sigma = zsqrts(zrdivs(sum,(row*col-1)));
    
    for(int i = 0; i < row*col; i++)
        out[i] = zrdivs(out[i],sigma);
}
