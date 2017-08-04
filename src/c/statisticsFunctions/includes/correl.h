 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __CORREL_H__
#define __CORREL_H__
#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
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

#ifdef  __cplusplus
extern "C" {
#endif

double dcorrels (double* inp1, int sr1, int sc1, double* inp2, int sr2, int sc2);
double dcorrelfres (double* inp1, int sr1, int sc1, double* inp2, int sr2, int sc2, double* inp3, int sr3, int sc3);

float scorrels (float* inp1, int sr1, int sc1, float* inp2, int sr2, int sc2);
float scorrelfres (float* inp1, int sr1, int sc1, float* inp2, int sr2, int sc2, float* inp3, int sr3, int sc3);

doubleComplex zcorrels (doubleComplex* inp1, int sr1, int sc1, doubleComplex* inp2, int sr2, int sc2);
doubleComplex zcorrelfres (doubleComplex* inp1, int sr1, int sc1, doubleComplex* inp2, int sr2, int sc2, doubleComplex* inp3, int sr3, int sc3);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__CORREL_H__*/
