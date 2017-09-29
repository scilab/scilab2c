 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __TAND_H__
#define __TAND_H__

#include "dynlib_elementaryfunctions.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif


double	       		dtands(double x);
float	       		stands(float x);
void dtanda(double* x, int size, double* y);
void standa(float* x, int size, double* y);

#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__TAND_H__ */

