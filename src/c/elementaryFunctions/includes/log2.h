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

#ifndef __LOG2_H__
#define __LOG2_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"
#include "log.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dlog2s(double inp);
float slog2s(float inp);
doubleComplex zlog2s(doubleComplex inp);
void dlog2a(double* inp,int size, double* out);
void slog2a(float* inp,int size, float* out);
void zlog2a(doubleComplex* inp,int size, doubleComplex* out);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__LOG2_H__ */

