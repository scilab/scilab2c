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

#ifndef __FAURRE_H__
#define __FAURRE_H__
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

void dfaurrea(int n, double* H, int H_row, int H_col, double* F, int F_row, int F_col, double* G, int G_row, int G_col, double * R0, int R0_row, int R0_col, double * P, double* R, double* T);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __FAURRE_H__ */

