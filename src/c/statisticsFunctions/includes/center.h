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

#ifndef __CENTER_H__
#define __CENTER_H__
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

#ifdef  __cplusplus
extern "C" {
#endif

void dcentera (double* inp, int row, int col, double* out);
void dcentercola (double* inp, int row, int col, double* out);
void dcenterrowa (double* inp, int row, int col, double* out);

void scentera (float* inp, int row, int col, float* out);
void scentercola (float* inp, int row, int col, float* out);
void scenterrowa (float* inp, int row, int col, float* out);

void zcentera (doubleComplex* inp, int row, int col, doubleComplex* out);
void zcentercola (doubleComplex* inp, int row, int col, doubleComplex* out);
void zcenterrowa (doubleComplex* inp, int row, int col, doubleComplex* out);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__CENTER_H__*/
