/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */ 



#ifndef __LOGM_INTERNAL_H__
#define __LOGM_INTERNAL_H__

#include "doubleComplex.h"

void wbdiag(doubleComplex* in, int size, doubleComplex* out);

void cbal(doubleComplex* in, int n, int* low, int* high, double* scale);

void corth(doubleComplex* in , int n, int low,int high, doubleComplex* ort);

void cortr(doubleComplex* in, int n, int low, int high, doubleComplex* ort, doubleComplex* z);

void comqr3(doubleComplex* in, int n, doubleComplex* w, int low, int high, int job, doubleComplex* z);

void wexchn();
void dad(doubleComplex* in, int size_1, int l11_1, int l22m1, int l11_2, int size_2, int one, int n);
void balbak();
void dset();
void dad();
void wshrsl();
doubleComplex ddot();
#endif /*__LOGM_INTERNAL_H__*/
