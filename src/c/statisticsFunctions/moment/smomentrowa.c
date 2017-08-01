#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"

void smomentrowa (float* inp, int row, int col, double ord, float* out)
{
    float vect[row];
    for(int i = 0; i < col ; i++)
    {
	for(int j = 0; j < row ; j++)
	{
	    vect[j] = inp[j + i*row];
	}
	out[i] = smoments(vect, row, ord);
    }

}
