#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"

void dmomentrowa (double* inp, int row, int col, double ord, double* out)
{
    double vect[row];
    for(int i = 0; i < col ; i++)
    {
	for(int j = 0; j < row ; j++)
	{
	    vect[j] = inp[j + i*row];
	}
	out[i] = dmoments(vect, row, ord);
    }

}
