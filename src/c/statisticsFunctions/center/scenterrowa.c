#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "subtraction.h"
#include "matrixMultiplication.h"
#include "center.h"

void scenterrowa (float* inp, int row, int col, float* out)
{

    float sum[col], xbar[col];
    for(int i = 0; i < col; i++)
	sum[i] = 0;


    for(int i = 0; i < col; i++)
    {
	for(int j = 0; j < row; j++)
	{
	    sum[i] +=  inp[j + i*row];
	}
    }



    for(int i = 0; i < col; i++)
	xbar[i] = sum[i]/row;

    float one[row];			// Creating a matrix of ones
    sonesa(one,row,1);

    float prod[row*col];
    smulma(one, row, 1, xbar, 1, col, prod);

    

    for(int i = 0; i< row*col; i++)
	out[i] = inp[i] - prod[i];
}
