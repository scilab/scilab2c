/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __NANMEAN_H__
#define __NANMEAN_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "int16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dnanmeana(double* in, int size);
void dnanmeancola(double *in, int row, int col, double* out);
void dnanmeanrowa(double *in, int row, int col, double* out);

float snanmeana(float* in, int size);
void snanmeancola(float *in, int row, int col, float* out);
void snanmeanrowa(float *in, int row, int col, float* out);

doubleComplex znanmeana(doubleComplex* in, int size);
void znanmeancola(doubleComplex *in, int row, int col, doubleComplex* out);
void znanmeanrowa(doubleComplex *in, int row, int col, doubleComplex* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__NANMEAN_H__*/
