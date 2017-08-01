#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"
#include "doubleComplex.h"
#include "floatComplex.h"

void zmomentrowa (doubleComplex* inp, int row, int col, double ord, doubleComplex* out)
{
    doubleComplex vect[row];
    for(int i = 0; i < col ; i++)
    {
	for(int j = 0; j < row ; j++)
	{
	    vect[j] = inp[j + i*row];
	}
	out[i] = zmoments(vect, row, ord);
    }

}
