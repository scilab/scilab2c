/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __LOG1P_H__
#define __LOG1P_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Logarithm for different types .
*/

/*
** \brief Float Logarithm function
** \param in : input value.
*/
float		slog1ps(float in);

/*
** \brief Double Logarithm function
** \param in : input value.
*/
double		dlog1ps(double in);

/*
** \brief Float Complex Logarithm function
** \param in : input value.
*/
floatComplex	clog1ps(floatComplex in);

/*
** \brief Double Complex Logarithm function
** \param in : input value.
*/
doubleComplex	zlog1ps(doubleComplex in);

/*
** \brief Float Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		slog1pa(float* in, int size, float* out);

/*
** \brief Double Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dlog1pa(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		clog1pa(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Logarithm function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		zlog1pa(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__LOG1P_H__ */

