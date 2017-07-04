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
#ifndef __SEC_H__
#define __SEC_H__
#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
//#include <complex.h>
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void dseca(double* in,int size,double* out);
double dsecs(double in);
void sseca(float* in,int size,float* out);
float ssecs(float in);

doubleComplex zsecs(doubleComplex z);
//void zseca(doubleComplex* in, int size,doubleComplex* out);
floatComplex csecs(floatComplex z);
void cseca(floatComplex* in, int size,floatComplex* out);
 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__SEC_H__*/
