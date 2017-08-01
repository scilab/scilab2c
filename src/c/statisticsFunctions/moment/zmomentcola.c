#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"
#include "doubleComplex.h"
#include "floatComplex.h"

void zmomentcola (doubleComplex* inp, int row, int col, double ord, doubleComplex* out)
{
    double vect[col];
    for(int i = 0; i < row ; i++)
    {
	for(int j = 0; j < col ; j++)
	{
	    vect[j] = inp[i + j*row];
	}
	out[i] = zmoments(vect, col, ord);
    }

}
