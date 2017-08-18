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
#ifndef __SCALING_H__
#define __SCALING_H__
#include "types.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "uint8.h"
#include "uint16.h"
#include "int16.h"
#include "factorial.h"
#include "ones.h"
#include "matrixMultiplication.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dscalinga (double* inp1, int row, int col, double inp2, double* inp3, int size3, double* out);
void sscalinga (float* inp1, int row, int col, double inp2, float* inp3, int size3, float* out);
void zscalinga (doubleComplex* inp1, int row, int col, doubleComplex inp2, doubleComplex* inp3, int size3, doubleComplex* out);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__SCALING_H__*/
