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
 
 
#ifndef __HILBERT_H__
#define __HILBERT_H__

#include "floatComplex.h"
#include "doubleComplex.h"

float shilberts(float in);

void shilberta (float* in, int rows, int cols, floatComplex *out);

double dhilberts(double in);

void dhilberta (double* in, int rows, int cols, doubleComplex *out);

#endif /* __HILBERT_H__ */
