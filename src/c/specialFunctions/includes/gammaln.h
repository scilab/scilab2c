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
#ifndef __GAMMALN_H__
#define __GAMMALN_H__
#include "types.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "uint8.h"
#include "uint16.h"
#include "int16.h"
#include "factorial.h"
#include "gamma.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dgammalns(double inp);
float sgammalns(float inp);
void dgammalna(double* inp,int size,double* out);
void sgammalna(float* inp,int size,float* out);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__GAMMALN_H__*/
