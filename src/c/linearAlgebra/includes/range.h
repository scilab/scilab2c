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

#ifndef __RANGE_H__
#define __RANGE_H__
#include "types.h"
#include "eye.h"
#include "rowcomp.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "matrixTranspose.h"
#include "matrixMultiplication.h"

#ifdef  __cplusplus
extern "C" {
#endif

double drangea(double* inp1, int row, int col, double inp2, double* out1);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RANGE_H__*/
