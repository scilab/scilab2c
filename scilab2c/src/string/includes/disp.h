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
#include "floatComplex.h"
#include "doubleComplex.h"

void sdisps (float in);

void ddisps (double in);

void cdisps (floatComplex in);

void zdisps (doubleComplex in);



void sdispa (float* in, int size);

void ddispa (double* in, int size);

void cdispa (floatComplex* in, int size);

void zdispa (doubleComplex* in, int size);

#endif /* !__DISP_H__ */
