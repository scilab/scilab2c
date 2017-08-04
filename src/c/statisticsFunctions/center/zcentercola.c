#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "center.h"
#include "doubleComplex.h"
#include "sqrt.h"

void zcentercola (doubleComplex* inp, int row, int col, doubleComplex* out)
{

    doubleComplex sum[row], xbar[row];
    for(int i = 0; i < row; i++)
	sum[i] = DoubleComplex(0,0);


    for(int i = 0; i < row; i++)
    {
	for(int j = 0; j < col; j++)
	{
	    sum[i] =  zadds(sum[i], inp[i + j*row]);
	}
    }


    for(int i = 0; i < row; i++)
	xbar[i] = zrdivs(sum[i], col);

    doubleComplex one[col];			// Creating a matrix of ones
    zonesa(one,1,col);


    doubleComplex prod[row*col];
    zmulma(xbar, row, 1, one, 1, col, prod);

    for(int i = 0; i< row*col; i++)
	out[i] = zdiffs(inp[i], prod[i]);   
}
