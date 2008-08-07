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

#ifndef __INFINITENORM_H__
#define __INFINITENORM_H__

#include "sign.h" 
#include "pythag.h"
#include "floatComplex.h"
#include "doubleComplex.h"

float  sinfnorma(float* in, int _iRows, int _iCols);

double dinfnorma(double* in, int _iRows, int _iCols);

float  cinfnorma(floatComplex* in, int _iRows, int _iCols);

double zinfnorma(doubleComplex* in, int _iRows, int _iCols);



#endif /* !__INFINITENORM_H__ */

