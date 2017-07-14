/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __ERFC_H__
#define __ERFC_H__
#include "types.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "uint8.h"
#include "uint16.h"
#include "int16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double derfcs(double inp1);
void derfca(double* inp1, int sizer, int sizec,double* out);
float serfcs(float inp1);
void serfca(float* inp1, int sizer, int sizec, float* out);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__ERFC_H__*/
