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

#ifndef __WCENTER_H__
#define __WCENTER_H__
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

void dwcentera (double* inp, int row, int col, double* out);
void dwcentercola (double* inp, int row, int col, double* out);
void dwcenterrowa (double* inp, int row, int col, double* out);

void swcentera (float* inp, int row, int col, float* out);
void swcentercola (float* inp, int row, int col, float* out);
void swcenterrowa (float* inp, int row, int col, float* out);

void zwcentera (doubleComplex* inp, int row, int col, doubleComplex* out);
void zwcentercola (doubleComplex* inp, int row, int col, doubleComplex* out);
void zwcenterrowa (doubleComplex* inp, int row, int col, doubleComplex* out);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__WCENTER_H__*/
