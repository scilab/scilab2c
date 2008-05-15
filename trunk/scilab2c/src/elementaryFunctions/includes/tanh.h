/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __TANH_H__
#define __TANH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute Hyperbolic Tangeant for different types .
*/

/*
** \brief Float Hyperbolic Tangeant function
** \param in : input value.
*/
float		stanhs(float in);

/*
** \brief Double Hyperbolic Tangeant function
** \param in : input value.
*/
double		dtanhs(double in);

/*
** \brief Float Complex Hyperbolic Tangeant function
** \param in : input value.
*/
floatComplex	ctanhs(floatComplex in);

/*
** \brief Double Complex Hyperbolic Tangeant function
** \param in : input value.
*/
doubleComplex	ztanhs(doubleComplex in);

/*
** \brief Float Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		stanha(float* in, int size, float* out);

/*
** \brief Double Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		dtanha(double* in, int size, double* out);

/*
** \brief Float Complex Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ctanha(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix Hyperbolic Tangeant function
** \param in : input array value.
** \param out : output array value.
** \param size : the size of in and out arrays.
*/
void		ztanha(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__TANH_H__ */
