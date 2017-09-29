#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"


double dmoments (double* inp, int size, double ord)
{
    double sum = 0;

    for(int i = 0; i < size; i++)		// Elements are raised to the order and then their mean is calculated to give moment
    {
        sum = sum + pow(inp[i], ord);
    }

    return sum/size;
}
