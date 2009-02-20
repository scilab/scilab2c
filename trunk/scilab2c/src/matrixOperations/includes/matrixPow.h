
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

#ifndef __MATRIXPOW_H__
#define __MATRIXPOW_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/* 
   powm is only working on square matrix
   so the size is limited to rows
*/
void spowma(float* in, int rows, float expand, float* out);

void dpowma(double* in, int rows, double expand, double* out);

void cpowma(floatComplex* in, int rows, floatComplex expand, floatComplex* out);

void zpowma(doubleComplex* in, int rows, doubleComplex expand, doubleComplex* out);





#endif/*__MATRIXPOW_H__*/
