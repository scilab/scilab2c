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

#ifndef __MOMENT_H__
#define __MOMENT_H__
#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "pow.h"
#include "addition.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dmoments (double* inp, int size, double ord);
void dmomentrowa (double* inp, int row, int col, double ord, double* out);
void dmomentcola (double* inp, int row, int col, double ord, double* out);

float smoments (float* inp, int size, double ord);
void smomentrowa (float* inp, int row, int col, double ord, float* out);
void smomentcola (float* inp, int row, int col, double ord, float* out);

doubleComplex zmoments (doubleComplex* inp, int size, double ord);
void zmomentrowa (doubleComplex* inp, int row, int col, double ord, doubleComplex* out);
void zmomentcola (doubleComplex* inp, int row, int col, double ord, doubleComplex* out);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__MOMENT_H__*/
