/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __HANK_H__
#define __HANK_H__
#include "types.h"
#include "doubleComplex.h"

#ifdef __cplusplus
extern "C" {
#endif

void dhanka(int m, int n, double*seq_conv, int row, int col, double*out);

void shanka(int m, int n, float*seq_conv, int row, int col, float*out);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __HANK_H__ */

