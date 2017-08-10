#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "sqrt.h"
#include "sum.h"
#include "correl.h"
#include "matrix.h"
#include "mean.h"

float scorrelfres (float* inp1, int sr1, int sc1, float* inp2, int sr2, int sc2, float* inp3, int sr3, int sc3)
{
    float p1[sr3], p2[sc3], m1 = 0, m2 = 0,  s1 = 0, s2 = 0, s3 = 0, diff1[sr1*sc1], diff2[sr2*sc2], sum = 0, prod[sr3];

    float fr[sr3*sc3];

    for(int i = 0; i < sr3*sc3; i++)
	s3 += inp3[i];

    for(int i = 0; i < sr3*sc3; i++)
	fr[i] = inp3[i]/s3;



    scolumnsuma(fr, sr3, sc3, p1);
    srowsuma(fr, sr3, sc3, p2);



    m1 = smulv(inp1, p1, sr3);
    m2 = smulv(inp2, p2, sc3);

    for(int i = 0; i < sr1*sc1; i++)
	diff1[i] = pow(inp1[i] - m1, 2);

    for(int i = 0; i < sr2*sc2; i++)
	diff2[i] = pow(inp2[i] - m2, 2);


    s1 = ssqrts(smulv(diff1, p1, sr3));
    s2 = ssqrts(smulv(p2, diff2, sc3));

    for(int i = 0; i < sr1*sc1; i++)
	diff1[i] = inp1[i] - m1;

    for(int i = 0; i < sr2*sc2; i++)
	diff2[i] = inp2[i] - m2;

    smulma(fr, sr3, sc3, diff2, sc2, 1, prod);

    return smulv(diff1, prod, sr3)/(s1*s2);
}
