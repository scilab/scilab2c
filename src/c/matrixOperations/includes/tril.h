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


#ifndef __TRIL_H__
#define __TRIL_H__

#include "types.h"

#ifdef  __cplusplus
#extern "C" {
#endif

void dtrila (double *in, int row, int column, double diag, double *out);
void strila (float *in, int row, int column, double diag, float *out);
void u8trila (uint8 *in, int row, int column, double diag, uint8 *out);
void u16trila (uint16 *in, int row, int column, double diag, uint16 *out);
void i8trila (int8 *in, int row, int column, double diag, int8 *out);
void i16trila (int16 *in, int row, int column, double diag, int16 *out);

#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__TRIL_H__*/
