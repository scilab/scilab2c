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

#ifndef __INTERP1_H__
#define __INTERP1_H__

#include <string.h>

#ifdef  __cplusplus
extern "C" {
#endif


//void dinterp13a(double *x,double *fx,double *q,int size,double *out);
void dinterp13a(double *x,int size1,double *fx,int size2,double *q,int size3,char *a,int size4,double *out);

void sinterp13a(float *x,int size1,float *fx,int size2,float *q,int size3,char *a,int size4,float *out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
