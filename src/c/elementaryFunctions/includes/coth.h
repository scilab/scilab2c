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
#ifndef __COTH_H__
#define __COTH_H__
#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void dcotha(double* in,int size,double* out);
double dcoths(double in);
void scotha(float* in,int size,float* out);
float scoths(float in);
doubleComplex zcoths(doubleComplex z);
void zcotha(doubleComplex* in, int size,doubleComplex* out);
void ccotha(floatComplex* in, int size,floatComplex* out);
floatComplex ccoths(floatComplex z);


 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__COTH_H__*/
