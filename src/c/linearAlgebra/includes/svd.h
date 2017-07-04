 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __SVD_H__
#define __SVD_H__
#include "types.h"
#include "doubleComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dsvda(double tol,double *in1,int row,int col,double in2,double nout,double *out1, \
	double *out2,double *out3);
void zsvda(doubleComplex *in1,int row,int col,int in2,int nout, doubleComplex *out1,\
		doubleComplex *out2,doubleComplex *out3);	

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__SVD_H__*/
