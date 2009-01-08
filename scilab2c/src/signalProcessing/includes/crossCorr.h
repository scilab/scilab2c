
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

#ifndef __CROSSCORR_H__
#define __CROSSCORR_H__

#include "floatComplex.h"
#include "doubleComplex.h"

void scrossCorra(float* in1, int rows1, int cols1, float* in2, int rows2, int cols2, float* out);

void dcrossCorra(double* in1, int rows1, int cols1, double* in2, int rows2, int cols2, double* out);

void ccrossCorra(floatComplex* in1, int rows1, int cols1, floatComplex* in2, int rows2, int cols2, floatComplex* out);

void zcrossCorra(doubleComplex* in1, int rows1, int cols1, doubleComplex* in2, int rows2, int cols2, doubleComplex* out);

#endif /* __CROSSCORR_H__ */
