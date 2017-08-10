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

#ifndef __NDGRID_H__
#define __NDGRID_H__
#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "ndgrid.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dndgrida(double* inp1, int size1, double* inp2, int size2, double* out1, double* out2);
void sndgrida(float* inp1, int size1, float* inp2, int size2, float* out1, float* out2);
void zndgrida(doubleComplex* inp1, int size1, doubleComplex* inp2, int size2, doubleComplex* out1, doubleComplex* out2);
#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__NDGRID_H__*/
