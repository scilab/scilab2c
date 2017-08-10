#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "subtraction.h"
#include "matrixMultiplication.h"
#include "wcenter.h"

void dwcenterrowa (double* inp, int row, int col, double* out)
{

    double sum[col], xbar[col];
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

    double one[row];			// Creating a matrix of ones
    donesa(one,row,1);

    double prod[row*col];
    dmulma(one, row, 1, xbar, 1, col, prod);

    

    for(int i = 0; i< row*col; i++)
	out[i] = inp[i] - prod[i];


    for(int i = 0; i < col; i++)
	sum[i] = 0;

    for(int i = 0; i < col; i++)
    {
	for(int j = 0; j < row; j++)
	{
	    sum[i] +=  out[j + i*row] * out[j + i*row];
	}
    }



    double sigma[col];
    for(int i = 0; i < col; i++)
	sigma[i] = sqrt(sum[i]/(row-1));


    for(int i = 0; i < row*col; i++)
	prod[i] = 0;

    dmulma(one, row, 1, sigma, 1, col, prod);

    for(int i = 0; i < row*col; i++)
	out[i] = out[i] / prod[i];

}
