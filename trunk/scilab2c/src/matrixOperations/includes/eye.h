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

#include "floatComplex.h"
#include "doubleComplex.h"

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
** \brief create a float Eye matrix
*/
void seyea(float* in, int _iRows, int _iCols);

/*
** \brief create a Double Eye matrix
*/
void deyea(double* in, int _iRows, int _iCols);

/*
** \brief create a float complex Eye matrix
*/
void ceyea(floatComplex* in, int _iRows, int _iCols);

/*
** \brief create a Double complex Eye matrix
*/
void zeyea(doubleComplex* in, int _iRows, int _iCols);

#endif /* !__EYE_H__ */

