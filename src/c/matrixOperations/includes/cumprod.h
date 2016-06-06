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
 

#ifndef __CUMPROD_H__
#define __CUMPROD_H__

#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

void dcumproda(double *in1, int row, int column, double *out);
void drowcumproda(double *in1, int row, int column, double *out);
void dcolumncumproda(double *in1, int row, int column, double *out);

void scumproda(float *in1, int row, int column, float *out);
void srowcumproda(float *in1, int row, int column, float *out);
void scolumncumproda(float *in1, int row, int column, float *out);

void u8cumproda(uint8 *in1, int row, int column, uint8 *out);
void u8rowcumproda(uint8 *in1, int row, int column, uint8 *out);
void u8columncumproda(uint8 *in1, int row, int column, uint8 *out);

void i8cumproda(int8 *in1, int row, int column, int8 *out);
void i8rowcumproda(int8 *in1, int row, int column, int8 *out);
void i8columncumproda(int8 *in1, int row, int column, int8 *out);

void u16cumproda(uint16 *in1, int row, int column, uint16 *out);
void u16rowcumproda(uint16 *in1, int row, int column, uint16 *out);
void u16columncumproda(uint16 *in1, int row, int column, uint16 *out);

void i16cumproda(int16 *in1, int row, int column, int16 *out);
void i16rowcumproda(int16 *in1, int row, int column, int16 *out);
void i16columncumproda(int16 *in1, int row, int column, int16 *out);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__CUMPROD_H__*/
