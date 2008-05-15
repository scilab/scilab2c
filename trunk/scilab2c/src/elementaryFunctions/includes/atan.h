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

#ifndef __ATAN_H__
#define __ATAN_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute ArcTangeant for different types .
*/

/*
** \brief Float ArcTangeant function
** \param in : input value.
*/
float		satans(float in);

/*
** \brief Double ArcTangeant function
** \param in : input value.
*/
double		datans(double in);

/*
** \brief Float Complex ArcTangeant function
** \param in : input value.
*/
floatComplex	catans(floatComplex in);

/*
** \brief Double Complex ArcTangeant function
** \param in : input value.
*/
doubleComplex	zatans(doubleComplex in);

/*
** \brief Float Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		satana(float* in, int size, float* out);

/*
** \brief Double Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		datana(double* in, int size, double* out);

/*
** \brief Float Complex Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		catana(floatComplex* in, int size, floatComplex* out);

/*
** \brief Double Complex Matrix ArcTangeant function
** \param in : input array value.
** \param out : input array value.
** \param size : the size of in and out arrays.
*/
void		zatana(doubleComplex* in, int size, doubleComplex* out);

#endif /* !__ATAN_H__ */
