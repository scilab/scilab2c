#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"

void dmomentcola (double* inp, int row, int col, double ord, double* out)
{
    double vect[col];
    for(int i = 0; i < row ; i++)
    {
	for(int j = 0; j < col ; j++)
	{
	    vect[j] = inp[i + j*row];
	}
	out[i] = dmoments(vect, col, ord);
    }

}
