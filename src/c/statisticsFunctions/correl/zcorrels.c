#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "pow.h"
#include "sqrt.h"
#include "sum.h"
#include "correl.h"
#include "matrix.h"
#include "mean.h"
#include "doubleComplex.h"

doubleComplex zcorrels (doubleComplex* inp1, int sr1, int sc1, doubleComplex* inp2, int sr2, int sc2)
{
    doubleComplex m1 = 0, m2 = 0, s1 = 0, s2 = 0, diff1[sr1*sc1], diff2[sr2*sc2], sum = 0;
    m1 = zmeana(inp1, sr1*sc1);
    m2 = zmeana(inp2, sr2*sc2);

    for(int i = 0; i < sr1*sc1; i++)
	diff1[i] = zpows(zdiffs(inp1[i], m1), DoubleComplex(2,0));

    for(int i = 0; i < sr2*sc2; i++)
	diff2[i] = zpows(zdiffs(inp2[i], m2), DoubleComplex(2,0));


    s1 = zsqrts(zsuma(diff1, sr1*sc1));
    s2 = zsqrts(zsuma(diff2, sr2*sc2));

    for(int i = 0; i < sr2*sc2; i++)
	sum = zadds(sum, zmuls(zdiffs(inp1[i], m1), zdiffs(inp2[i], m2))); 

    return zrdivs(sum, zmuls(s1,s2));
}
