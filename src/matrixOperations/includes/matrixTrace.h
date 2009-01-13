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

float stracea ( float* in ,int lines ) ;


/*
** \brief Compute the trace of a double scalar  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : double scalar containing the trace.
*/
double dtracea ( double* in ,int lines ) ;

/*
** \brief Compute the trace of a float complex  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : float complex containing the trace.
*/
floatComplex ctracea ( floatComplex* in ,int lines ) ;


/*
** \brief Compute the trace of a double complex  matrix.
** \param in : input array.
** \param lines : number of lines  
** \param out : double complex containing the trace.
*/
doubleComplex ztracea ( doubleComplex* in ,int lines ) ;

#endif /* !__MATRICXTRACE_H__ */
