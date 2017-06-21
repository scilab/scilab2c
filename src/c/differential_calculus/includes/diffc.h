 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __DIFFC_H__
#define __DIFFC_H__

#include "types.h"
#include <stdio.h> 
#include <stdlib.h> 

#ifdef  __cplusplus
extern "C" {
#endif

void ddiffca(double *in, int row, int col, int depth, int dim, double *out);

void sdiffca(float *in, int row, int col, int depth, int dim, float *out);

void u8diffca(uint8 *in, int row, int col, int depth, int dim, uint8 *out);

void i8diffca(int8 *in, int row, int col, int depth, int dim, int8 *out);

void u16diffca(uint16 *in, int row, int col, int depth, int dim, uint16 *out);

void i16diffca(int16 *in, int row, int col, int depth, int dim, int16 *out);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__DIFFC_H__*/
