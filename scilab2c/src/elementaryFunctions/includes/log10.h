/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __LOG10_H__
#define __LOG10_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Ten based Logarithm for different types .
*/

/*
** \brief Float Ten based Logarithm function
** \param in : input value.
*/
float		slog10s(float in);

/*
** \brief Double Ten based Logarithm function
** \param in : input value.
*/
double		dlog10s(double in);

/*
** \brief Float Complex Ten based Logarithm function
** \param in : input value.
*/
floatComplex	clog10s(floatComplex in);

/*
** \brief Double Complex Ten based Logarithm function
** \param in : input value.
*/
doubleComplex	zlog10s(doubleComplex in);

/*
** \brief Float Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		slog10a(float* in, int size, float* out);

/*
** \brief Double Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dlog10a(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		clog10a(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Ten based Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zlog10a(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__LOG10_H__ */

