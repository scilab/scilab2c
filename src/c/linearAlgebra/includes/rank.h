 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __RANK_H__
#define __RANK_H__
#include "types.h"
#include "doubleComplex.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dranka(double* in1, int rows, int cols);

doubleComplex zranka(doubleComplex* in1, int rows, int cols);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RANK_H__*/
