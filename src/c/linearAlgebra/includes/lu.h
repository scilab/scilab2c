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
#ifndef __LU_H__
#define __LU_H__
#include "types.h"
#include "doubleComplex.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lapack.h"
#include "string.h"
#include "matrixTranspose.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dlua(double*inp1, int size, double* out1, double* out2);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__LU_H__*/
