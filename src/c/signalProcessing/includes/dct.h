/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ukasha Noor
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#ifndef __DCT_H__
#define __DCT_H__

#include <math.h>
#include "types.h"
#include "doubleComplex.h"
#include "addition.h"

#ifdef  __cplusplus
extern "C" {
#endif

void ddcta(double *in,int row,int col,int sign,double *out);

void sdcta(float *in,int row,int col,int sign,float *out);

void zdcta(doubleComplex *in,int row,int col,int sign,doubleComplex *out);

//void cdcta(floatComplex *in,int row,int col,int sign,floatComplex *out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
