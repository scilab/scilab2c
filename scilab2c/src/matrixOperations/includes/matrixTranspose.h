/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __MATRIXTRANSPOSE_H__
#define __MATRIXTRANSPOSE_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include <math.h>

void stransposea ( float* in , int lines1 , int column1, float* out );

void dtransposea ( double*  in , int lines1 , int column1, double* out );

void ctransposea ( floatComplex* in , int lines1 , int column1, floatComplex* out );

void ztransposea ( doubleComplex* in , int lines1 , int column1, doubleComplex* out );

#endif /* !__MATRIXTRANSPOSE_H__ */
