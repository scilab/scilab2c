#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "subtraction.h"
#include "matrixMultiplication.h"
#include "wcenter.h"

void swcentercola (float* inp, int row, int col, float* out)
{

    float sum[row], xbar[row];
    for(int i = 0; i < row; i++)
	sum[i] = 0;


    for(int i = 0; i < row; i++)
    {
	for(int j = 0; j < col; j++)
	{
	    sum[i] +=  inp[i + j*row];
	}
    }

    for(int i = 0; i < row; i++)
	xbar[i] = sum[i]/col;

    float one[col];			// Creating a matrix of ones
    sonesa(one,1,col);


    float prod[row*col];
    smulma(xbar, row, 1, one, 1, col, prod);

    for(int i = 0; i< row*col; i++)
	out[i] = inp[i] - prod[i];

    for(int i = 0; i < row; i++)
	sum[i] = 0;

    for(int i = 0; i < row; i++)
    {
	for(int j = 0; j < col; j++)
	{
	    sum[i] +=  out[i + j*row] * out[i + j*row];
	}
    }

    float sigma[row];
    for(int i = 0; i < row; i++)
	sigma[i] = sqrt(sum[i]/(col-1));

    for(int i = 0; i < row*col; i++)
	prod[i] = 0;

    smulma(sigma, row, 1, one, 1, col, prod);

    for(int i = 0; i < row*col; i++)
	out[i] = out[i] / prod[i];
    
}
