/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __MATRIXEYES_H__
#define __MATRIXEYES_H__

#include "floatComplex.h"
#include "doubleComplex.h"

void seyesa(float* in, int _iRows, int _iCols);

void deyesa(double* in, int _iRows, int _iCols);

void ceyesa(floatComplex* in, int _iRows, int _iCols);

void zeyesa(doubleComplex* in, int _iRows, int _iCols);



#endif /* !__MATRIXEYES_H__ */

