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

void zcenterrowa (doubleComplex* inp, int row, int col, doubleComplex* out)
{

    doubleComplex sum[col], xbar[col];
    for(int i = 0; i < col; i++)
	sum[i] = DoubleComplex(0,0);


    for(int i = 0; i < col; i++)
    {
	for(int j = 0; j < row; j++)
	{
	    sum[i] = zadds(sum[i], inp[j + i*row]);
	}
    }



    for(int i = 0; i < col; i++)
	xbar[i] = zrdivs(sum[i], row);

    doubleComplex one[row];			// Creating a matrix of ones
    zonesa(one,row,1);

    doubleComplex prod[row*col];
    zmulma(one, row, 1, xbar, 1, col, prod);

    

    for(int i = 0; i< row*col; i++)
	out[i] = zdiffs(inp[i], prod[i]);
}
