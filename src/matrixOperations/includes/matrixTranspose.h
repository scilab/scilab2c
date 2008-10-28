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

#include "floatComplex.h"
#include "doubleComplex.h"
#include <math.h>
/*
** \brief Compute the transpose of a float  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed float matrix.
*/
void stransposea ( float* in , int lines1 , int column1, float* out );
/*
** \brief Compute the transpose of a double matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed double matrix.
*/
void dtransposea ( double*  in , int lines1 , int column1, double* out );
/*
** \brief Compute the transpose of a float complex  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed float complex matrix.
*/
void ctransposea ( floatComplex* in , int lines1 , int column1, floatComplex* out );
/*
** \brief Compute the transpose of a double complex  matrix.
** \param in : input matrix.
** \param lines1 : number of lines
** \param column1 : number of column1
** \param out : the transposed double complex matrix.
*/
void ztransposea ( doubleComplex* in , int lines1 , int column1, doubleComplex* out );

#endif /* !__MATRIXTRANSPOSE_H__ */
