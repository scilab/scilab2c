/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __CSC_H__
#define __CSC_H__
#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void dcsca(double* in,int size,double* out);
double dcscs(double in);
void scsca(float* in,int size,float* out);
float scscs(float in);
doubleComplex zcscs(doubleComplex z);
void zcsca(doubleComplex* in, int size,doubleComplex* out);
floatComplex ccscs(floatComplex z);
void ccsca(floatComplex* in, int size,floatComplex* out);

 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__CSC_H__*/
