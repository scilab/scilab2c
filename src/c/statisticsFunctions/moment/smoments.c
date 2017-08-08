#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"


float smoments (float* inp, int size, double ord)
{
    float sum = 0;

    for(int i = 0; i < size; i++)			// Elements are raised to the order and then their mean is calculated to give moment
    {
        sum = sum + pow(inp[i], ord);
    }

    return sum/size;
}
