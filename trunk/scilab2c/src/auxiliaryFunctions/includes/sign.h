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

#ifndef __SIGN_H__
#define __SIGN_H__

#include <math.h>

#include "floatComplex.h"
#include "doubleComplex.h"

/**
 ** \brief Float Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int		ssigns(float in);

/**
 ** \brief Double Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
int		dsigns(double in);

/**
 ** \brief Float Complex Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the float we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
floatComplex	csigns(floatComplex in);

/**
 ** \brief Double Complex Signe function
 ** Determine the sine of in (assume that 0 is positive).
 ** \param in : the double we must determine sign.
 ** \return -1 or +1 depending on the sign of in.
 **/
doubleComplex	zsigns(doubleComplex in);

/**
 ** \brief Float Signe Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the float array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
void	ssigna(float *in, int size, float *out);

/**
 ** \brief Double Signe Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the double array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
void	dsigna(double *in, int size, double *out);

/**
 ** \brief Float Signe Complex Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the float complex array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
void	csigna(floatComplex *in, int size, floatComplex *out);

/**
 ** \brief Double Signe Complex Array function
 ** Determine the sine of an array in (assume that 0 is positive).
 ** \param in : the double complex array we must determine sign.
 ** \param size : the number of elements.
 ** \return -1 or +1 depending on the sign of in elements.
 **/
void	zsigna(doubleComplex *in, int size, doubleComplex *out);

#endif /* !__SIGN_H__ */
