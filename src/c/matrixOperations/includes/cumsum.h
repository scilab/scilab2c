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


#ifndef __CUMSUM_H__
#define __CUMSUM_H__

#include "types.h"

#ifdef  __cplusplus
#extern "C" {
#endif

void dcumsuma(double *in1, int row, int column, double *out);
void drowcumsuma(double *in1, int row, int column, double *out);
void dcolumncumsuma(double *in1, int row, int column, double *out);

void scumsuma(float *in1, int row, int column, float *out);
void srowcumsuma(float *in1, int row, int column, float *out);
void scolumncumsuma(float *in1, int row, int column, float *out);

void u8cumsuma(uint8 *in1, int row, int column, uint8 *out);
void u8rowcumsuma(uint8 *in1, int row, int column, uint8 *out);
void u8columncumsuma(uint8 *in1, int row, int column, uint8 *out);

void i8cumsuma(int8 *in1, int row, int column, int8 *out);
void i8rowcumsuma(int8 *in1, int row, int column, int8 *out);
void i8columncumsuma(int8 *in1, int row, int column, int8 *out);

void u16cumsuma(uint16 *in1, int row, int column, uint16 *out);
void u16rowcumsuma(uint16 *in1, int row, int column, uint16 *out);
void u16columncumsuma(uint16 *in1, int row, int column, uint16 *out);

void i16cumsuma(int16 *in1, int row, int column, int16 *out);
void i16rowcumsuma(int16 *in1, int row, int column, int16 *out);
void i16columncumsuma(int16 *in1, int row, int column, int16 *out);



#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__CUMSUM_H__*/
