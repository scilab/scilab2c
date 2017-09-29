/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __DIAG_H__
#define __DIAG_H__

#include "dynlib_matrixoperations.h"
#include "types.h"
#include <stdlib.h>
 
#ifdef  __cplusplus
extern "C" {
#endif

EXTERN_MATOPS double ddiags(double in );

EXTERN_MATOPS void ddiaga(double in, int size,int insert_post,double *out);

EXTERN_MATOPS void ddiagina(double *in, int _row,int _column,int insert_post,double *out);

EXTERN_MATOPS void ddiagins(double* in, int size, double* out );

EXTERN_MATOPS void ddiagexa(double* in,int row,int column,int insert_pos,double* out);

EXTERN_MATOPS double ddiagexs(double* in,int row,int column,int extract_pos);

EXTERN_MATOPS uint8 u8diags(uint8 in );

EXTERN_MATOPS void u8diaga(uint8 in, int size,int insert_post,uint8 *out);

EXTERN_MATOPS void u8diagina(uint8 *in, int _row,int _column,int insert_post,uint8 *out);

EXTERN_MATOPS void u8diagins(uint8* in, int size, uint8* out );

EXTERN_MATOPS void u8diagexa(uint8* in,int row,int column,int insert_pos,uint8* out);

EXTERN_MATOPS uint8 u8diagexs(uint8* in,int row,int column,int extract_pos);

EXTERN_MATOPS uint16 u16diags(uint16 in );

EXTERN_MATOPS void u16diaga(uint16 in, int size,int insert_post,uint16 *out);

EXTERN_MATOPS void u16diagina(uint16 *in, int _row,int _column,int insert_post,uint16 *out);

EXTERN_MATOPS void u16diagins(uint16* in, int size, uint16* out );

EXTERN_MATOPS void u16diagexa(uint16* in,int row,int column,int insert_pos,uint16* out);

EXTERN_MATOPS uint16 u16diagexs(uint16* in,int row,int column,int extract_pos);

EXTERN_MATOPS int8 i8diags(int8 in );

EXTERN_MATOPS void i8diaga(int8 in, int size,int insert_post,int8 *out);

EXTERN_MATOPS void i8diagina(int8 *in, int _row,int _column,int insert_post,int8 *out);

EXTERN_MATOPS void i8diagins(int8* in, int size, int8* out );

EXTERN_MATOPS void i8diagexa(int8* in,int row,int column,int insert_pos,int8* out);

EXTERN_MATOPS int8 i8diagexs(int8* in,int row,int column,int extract_pos);

EXTERN_MATOPS int16 i16diags(int16 in );

EXTERN_MATOPS void i16diaga(int16 in, int size,int insert_post,int16 *out);

EXTERN_MATOPS void i16diagina(int16 *in, int _row,int _column,int insert_post,int16 *out);

EXTERN_MATOPS void i16diagins(int16* in, int size, int16* out );

EXTERN_MATOPS void i16diagexa(int16* in,int row,int column,int insert_pos,int16* out);

EXTERN_MATOPS int16 i16diagexs(int16* in,int row,int column,int extract_pos);









#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__DIAG_H__ */

