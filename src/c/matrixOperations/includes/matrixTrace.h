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

#ifndef __MATRICXTRACE_H__
#define __MATRICXTRACE_H__

#include "dynlib_matrixoperations.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

/*
**
** WARNING WE ASSUME MATRIXES TO BE SQUARE
** 
*/


/*
** \brief Compute the trace of a float scalar  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : float scalar containing the trace.
*/

EXTERN_MATOPS float stracea ( float* in ,int lines ) ;


/*
** \brief Compute the trace of a double scalar  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : double scalar containing the trace.
*/
EXTERN_MATOPS double dtracea ( double* in ,int lines ) ;

/*
** \brief Compute the trace of a float complex  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : float complex containing the trace.
*/
EXTERN_MATOPS floatComplex ctracea ( floatComplex* in ,int lines ) ;


/*
** \brief Compute the trace of a double complex  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : double complex containing the trace.
*/
EXTERN_MATOPS doubleComplex ztracea ( doubleComplex* in ,int lines ) ;


/*
** \brief Compute the trace of a uint8  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : uint8 containing the trace.
*/
EXTERN_MATOPS uint8 u8tracea ( uint8* in ,int lines ) ;


/*
** \brief Compute the trace of a uint16  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : uint16 containing the trace.
*/
EXTERN_MATOPS uint16 u16tracea ( uint16* in ,int lines ) ;


/*
** \brief Compute the trace of a int8  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : int8 containing the trace.
*/
EXTERN_MATOPS int8 i8tracea ( int8* in ,int lines ) ;


/*
** \brief Compute the trace of a int16  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : int16 containing the trace.
*/
EXTERN_MATOPS int16 i16tracea ( int16* in ,int lines ) ;



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__MATRICXTRACE_H__ */
