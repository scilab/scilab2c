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

#ifndef __DISP_H__
#define __DISP_H__

#include <stdio.h>

void sdips (float in);

void ddips (double in);

void cdips (floatComplex in);

void zdips (doubleComplex in);



void sdipsa (float* in, int size);

void ddipsa (double* in, int size);

void cdispa (floatComplex* in, int size);

void zdipsa (doubleComplex* in, int size);

#endif /* !__DISP_H__ */
