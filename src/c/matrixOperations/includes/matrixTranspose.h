/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __MATRIXTRANSPOSE_H__
#define __MATRIXTRANSPOSE_H__

#include "dynlib_matrixoperations.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"
#include <math.h>

#ifdef  __cplusplus
extern "C" {
#endif
/*
** \brief Compute the transpose of a float  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed float matrix.
*/
EXTERN_MATOPS void stransposea ( float* in , int lines1 , int column1, float* out );
/*
** \brief Compute the transpose of a double matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed double matrix.
*/
EXTERN_MATOPS void dtransposea ( double*  in , int lines1 , int column1, double* out );
/*
** \brief Compute the transpose of a float complex  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed float complex matrix.
*/
EXTERN_MATOPS void ctransposea ( floatComplex* in , int lines1 , int column1, floatComplex* out );
/*
** \brief Compute the transpose of a double complex  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed double complex matrix.
*/
EXTERN_MATOPS void ztransposea ( doubleComplex* in , int lines1 , int column1, doubleComplex* out );


/*
** \brief Compute the transpose of a uint8  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed uint8  matrix.
*/
EXTERN_MATOPS void u8transposea ( uint8* in , int lines1 , int column1, uint8* out );

/*
** \brief Compute the transpose of a uint16  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed uint16  matrix.
*/
EXTERN_MATOPS void u16transposea ( uint16* in , int lines1 , int column1, uint16* out );

/*
** \brief Compute the transpose of a int8  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed int8  matrix.
*/
EXTERN_MATOPS void i8transposea ( int8* in , int lines1 , int column1, int8* out );

/*
** \brief Compute the transpose of a int16  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed int16  matrix.
*/
EXTERN_MATOPS void i16transposea ( int16* in , int lines1 , int column1, int16* out );



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__MATRIXTRANSPOSE_H__ */
