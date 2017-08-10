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

double dcovars (double* inp1, int sr1, int sc1, double* inp2, int sr2, int sc2, double* fre, int sr3, int sc3)
{
    double fr[sr3*sc3], s3 = 0, sfrr[sc3], p1[sc2*sc3], s1 = 0, d1[sc2] , one[sr1*sc1], p2[sc1 * sc2], p3[sr3*sc3], sfrc[sr3], p4[sr3], s2 = 0, d2[sr1*sc1], one2[sr2*sc2], p5[sr1*sc1*sr2*sc2],            p6[sr1*sc1*sr2*sc2],s4 = 0;

    for(int i = 0; i < sr3*sc3; i++)
	s3 += fre[i];

    for(int i = 0; i < sr3*sc3; i++)
	fr[i] = fre[i]/s3;

    drowsuma(fr, sr3, sc3, sfrr);

    for(int i = 0; i < sc3; i++)
	p1[i] = inp2[i] * sfrr[i];

    for(int i = 0; i < sc3; i++)
	s1 += p1[i];



    for(int i = 0; i < sc2; i++)
	d1[i] = inp2[i] - s1;

    donesa(one, sr1*sc1, 1);

    dmulma(one, sr1*sc1, 1, d1, 1, sc2,  p2);

    for(int i = 0; i < sr3*sc3; i++)
	p3[i] = fr[i] * p2[i];

    dcolumnsuma(fr, sr3, sc3, sfrc);

    for(int i = 0; i < sr3; i++)
	p4[i] = inp1[i] * sfrc[i];

    for(int i = 0; i < sr3; i++)
	s2 += p4[i];

    for(int i = 0; i < sr1*sc1; i++)
	d2[i] = inp1[i] - s2;

    donesa(one2, 1, sr2*sc2);

    dmulma(d2, sr1*sc1, 1, one2, 1, sr2*sc2, p5);

    for(int i = 0; i < sr1*sc1*sr2*sc2; i++)
	p6[i] = p5[i] * p3[i];


    for(int i = 0; i < sr1*sc1*sr2*sc2; i++)
	s4 += p6[i];


    return s4;      

}
