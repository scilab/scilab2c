#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"

void smomentcola (float* inp, int row, int col, double ord, float* out)
{
    float vect[col];
    for(int i = 0; i < row ; i++)
    {
	for(int j = 0; j < col ; j++)
	{
	    vect[j] = inp[i + j*row];
	}
	out[i] = smoments(vect, col, ord);
    }

}
