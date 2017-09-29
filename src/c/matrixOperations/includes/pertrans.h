/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 

#ifndef __PERTRANS_H__
#define __PERTRANS_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dpertransa(double *in, int row, int col, double* out);
double dpertranss(double in);

void spertransa(float *in, int row, int col, float* out);
float spertranss(float in);

void zpertransa(doubleComplex *in, int row, int col, doubleComplex* out);
doubleComplex zpertranss(doubleComplex in);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__PERTRANS_H__*/
