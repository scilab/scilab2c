/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __EYE_H__
#define __EYE_H__

#include "dynlib_matrixoperations.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "ones.h"

#ifdef  __cplusplus
extern "C" {
#endif

/*
** \brief create a float Eye value
*/
#define seyes(in)		1.0f

/*
** \brief create a Double Eye value
*/
#define deyes(in)		1.0

/*
** \brief create a float complex Eye value
*/
#define ceyes(in)		FloatComplex(1.0f, 0)

/*
** \brief create a Double complex Eye value
*/
#define zeyes(in)		DoubleComplex(1, 0)

/*
** \brief create a Uint8 Eye value
*/
#define u8eyes(in)		(uint8)1

/*
** \brief create a int8 Eye value
*/
#define i8eyes(in)		(int8)1

/*
** \brief create a Uint16 Eye value
*/
#define u16eyes(in)		(uint16)1

/*
** \brief create a int16 Eye value
*/
#define i16eyes(in)		(int16)1

/*
** \brief create a float Eye matrix
*/
EXTERN_MATOPS void seyea(float* in, int _iRows, int _iCols);

/*
** \brief create a Double Eye matrix
*/
EXTERN_MATOPS void deyea(double* in, int _iRows, int _iCols);

/*
** \brief create a float complex Eye matrix
*/
EXTERN_MATOPS void ceyea(floatComplex* in, int _iRows, int _iCols);

/*
** \brief create a Double complex Eye matrix
*/
EXTERN_MATOPS void zeyea(doubleComplex* in, int _iRows, int _iCols);

/*
** \brief create a uint8 Eye matrix
*/
EXTERN_MATOPS void u8eyea(uint8* in, int _iRows, int _iCols);

/*
** \brief create a int8 Eye matrix
*/
EXTERN_MATOPS void i8eyea(int8* in, int _iRows, int _iCols);

/*
** \brief create a uint16 Eye matrix
*/
EXTERN_MATOPS void u16eyea(uint16* in, int _iRows, int _iCols);

/*
** \brief create a int16 Eye matrix
*/
EXTERN_MATOPS void i16eyea(int16* in, int _iRows, int _iCols);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__EYE_H__ */

