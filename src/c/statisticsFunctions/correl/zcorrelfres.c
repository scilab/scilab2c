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

doubleComplex zcorrelfres (doubleComplex* inp1, int sr1, int sc1, doubleComplex* inp2, int sr2, int sc2, doubleComplex* inp3, int sr3, int sc3)
{
    doubleComplex p1[sr3], p2[sc3], m1 = 0, m2 = 0,  s1 = 0, s2 = 0, s3 = 0, diff1[sr1*sc1], diff2[sr2*sc2], sum = 0, prod[sr3];

    doubleComplex fr[sr3*sc3];

    for(int i = 0; i < sr3*sc3; i++)
	s3 = zadds(s3, inp3[i]);

    for(int i = 0; i < sr3*sc3; i++)
	fr[i] = zrdivs(inp3[i],s3);



    zcolumnsuma(fr, sr3, sc3, p1);
    zrowsuma(fr, sr3, sc3, p2);



    m1 = zmulv(inp1, p1, sr3);
    m2 = zmulv(inp2, p2, sc3);

    for(int i = 0; i < sr1*sc1; i++)
	diff1[i] = zpows(zdiffs(inp1[i], m1), DoubleComplex(2,0));

    for(int i = 0; i < sr2*sc2; i++)
	diff2[i] = zpows(zdiffs(inp2[i], m2), DoubleComplex(2,0));


    s1 = zsqrts(zmulv(diff1, p1, sr3));
    s2 = zsqrts(zmulv(p2, diff2, sc3));

    for(int i = 0; i < sr1*sc1; i++)
	diff1[i] = zdiffs(inp1[i], m1);

    for(int i = 0; i < sr2*sc2; i++)
	diff2[i] = zdiffs(inp2[i], m2);

    zmulma(fr, sr3, sc3, diff2, sc2, 1, prod);

    return zrdivs(zmulv(diff1, prod, sr3), zmuls(s1, s2));
}
