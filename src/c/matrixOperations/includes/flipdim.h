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


#ifndef __FLIPDIM_H__
#define __FLIPDIM_H__

#include "types.h"


#ifdef  __cplusplus
#extern "C" {
#endif

void dflipdima (double *in, int row, int col, int dim, int blk_size, double *out);

void sflipdima (float *in, int row, int col, int dim, int blk_size, float *out);

void u8flipdima (uint8 *in, int row, int col, int dim, int blk_size, uint8 *out);

void i8flipdima (int8 *in, int row, int col, int dim, int blk_size, int8 *out);

void u16flipdima (uint16 *in, int row, int col, int dim, int blk_size, uint16 *out);

void i16flipdima (int16 *in, int row, int col, int dim, int blk_size, int16 *out);

#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__FLIPDIM_H__*/
