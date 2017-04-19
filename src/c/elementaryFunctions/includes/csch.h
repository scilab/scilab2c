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
#ifndef __CSCH_H__
#define __CSCH_H__
#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

 #ifdef  __cplusplus
 extern "C" {
 #endif

void dcscha(double* in,int size,double* out);
double dcschs(double in);
void scscha(float* in,int size,float* out);
float scschs(float in);

void ccscha(floatComplex* in,int size,floatComplex* out);
floatComplex ccschs(floatComplex in);
void zcscha(doubleComplex* in,int size,doubleComplex* out);
doubleComplex zcschs(doubleComplex in);


 #ifdef  __cplusplus 
 } /* extern "C" */
 #endif

#endif /*__CSCH_H__*/
