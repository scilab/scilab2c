#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "moment.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "pow.h"
#include "addition.h"
#include "division.h"


doubleComplex zmoments (doubleComplex* inp, int size, double ord)
{
    doubleComplex sum = DoubleComplex(0,0);

    for(int i = 0; i < size; i++)			// Elements are raised to the order and then their mean is calculated to give moment
    {
        sum = zadds(sum,zpows(inp[i], ord));
    }

    return zrdivs(sum,size);
}
