#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "subtraction.h"
#include "matrixMultiplication.h"
#include "center.h"

void dcentercola (double* inp, int row, int col, double* out)
{

    double sum[row], xbar[row];
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

    double one[col];			// Creating a matrix of ones
    donesa(one,1,col);


    double prod[row*col];
    dmulma(xbar, row, 1, one, 1, col, prod);

    for(int i = 0; i< row*col; i++)
	out[i] = inp[i] - prod[i];   
}
