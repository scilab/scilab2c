#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "subtraction.h"
#include "multiplication.h"
#include "wcenter.h"

void swcentera (float* inp, int row, int col, float* out)
{
    float sum = 0, xbar = 0, sigma = 0;
    for(int i = 0; i < row*col; i++)		// Findinag the maen of all the elements of the matrix
        sum += inp[i];
    xbar = sum/(row*col);
    
    float one[row*col];			// Creating a matrix of ones
    sonesa(one,row,col);

    float prod[row*col];
    for(int i = 0; i < row*col; i++)		// Applying the formula (x(i,j)-xbar)/sigma
        prod[i] = one[i]*xbar;

    for(int i = 0; i < row*col; i++)
        out[i] = inp[i] - prod[i];

    sum = 0;
    for(int i = 0; i < row*col; i++)
        sum =  sum + out[i]*out[i];

    sigma = sqrt(sum/(row*col-1));
    
    for(int i = 0; i < row*col; i++)
        out[i] = out[i]/sigma;
}
