// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


#ifndef __KRON_H__
#define __KRON_H__

#include "kron.h"

#ifdef  __cplusplus
#extern "C" {
#endif

void dkrona (double *in1, int row1, int col1, double *in2, int row2, \
			int col2, double *out);
void skrona (float *in1, int row1, int col1, float *in2, int row2, \
			int col2, float *out);

#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__KRON_H__*/
