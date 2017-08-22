/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __KALM_H__
#define __KALM_H__
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

void dkalma(double* y, int y_row, int y_col, double* x0, int x0_row, int x0_col, double* p0, int p0_row, int p0_col, double* f, int f_row, int f_col, double* g, int g_row, int g_col, double* h, int h_row, int h_col, double* q, int q_row, int q_col, double* r, int r_row, int r_col, double* x1, double* p1, double* x, double* p);
	    

void zkalma(doubleComplex* y, int y_row, int y_col, doubleComplex* x0, int x0_row, int x0_col,doubleComplex* p0, int p0_row, int p0_col, doubleComplex* f, int f_row, int f_col, doubleComplex* g, int g_row, int g_col, doubleComplex* h, int h_row, int h_col, doubleComplex* q, int q_row, int q_col, doubleComplex* r, int r_row, int r_col, doubleComplex* x1, doubleComplex* p1, doubleComplex* x, doubleComplex* p);



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __KALM_H__ */

