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

#ifndef __COVAR_H__
#define __COVAR_H__
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

double dcovars (double* inp1, int sr1, int sc1, double* inp2, int sr2, int sc2, double* fre, int sr3, int sc3);
float scovars (float* inp1, int sr1, int sc1, float* inp2, int sr2, int sc2, float* fre, int sr3, int sc3);
doubleComplex zcovars (doubleComplex* inp1, int sr1, int sc1, doubleComplex* inp2, int sr2, int sc2, doubleComplex* fre, int sr3, int sc3);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__COVAR_H__*/
