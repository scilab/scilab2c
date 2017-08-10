/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 

#ifndef __GSORT_H__
#define __GSORT_H__

#include "types.h"
#include "doubleComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dgsorta(double *in, int size, char check, double* out);
void dgsortcola(double *in, int row, int col, char check, double* out);
void dgsortrowa(double *in, int row, int col, char check, double* out);

void sgsorta(float *in, int size, char check, float* out);
void sgsortcola(float *in, int row, int col, char check, float* out);
void sgsortrowa(float *in, int row, int col, char check, float* out);

void u16gsorta(uint16 *in, int size, char check, uint16* out);
void u16gsortcola(uint16 *in, int row, int col, char check, uint16* out);
void u16gsortrowa(uint16 *in, int row, int col, char check, uint16* out);

void zgsorta(doubleComplex *in, int size, char check, doubleComplex* out);
void zgsortcola(doubleComplex *in, int row, int col, char check, doubleComplex* out);
void zgsortrowa(doubleComplex*in, int row, int col, char check, doubleComplex* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__GSORT_H__*/
