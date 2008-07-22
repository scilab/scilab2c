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

#include "floatComplex.h"
#include "doubleComplex.h"


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

void stracea ( float* in ,int lines, float* out ) ;


/*
** \brief Compute the trace of a double scalar  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : double scalar containing the trace.
*/
void dtracea ( double* in ,int lines, double* out ) ;

/*
** \brief Compute the trace of a float complex  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : float complex containing the trace.
*/
void ctracea ( floatComplex* in ,int lines, floatComplex* out ) ;


/*
** \brief Compute the trace of a double complex  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : double complex containing the trace.
*/
void ztracea ( doubleComplex* in ,int lines, doubleComplex* out ) ;

#endif /* !__MATRICXTRACE_H__ */
