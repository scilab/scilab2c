
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


#ifndef __ABS_H__
#define __ABS_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "sqrt.h"


/**
 ** \brief Float Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the float we must determine abs.
 ** \return -in or in depending on the sign of in.
 **/
float	sabss(float in);

/**
 ** \brief Double Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double we must determine abs.
 ** \return -in or +in depending on the abs of in.
 **/
double	dabss(double in);

/**
 ** \brief Float Complex Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the float complex we must determine abs i.e. module.
 ** \return |in|.
 **/
float	cabss(floatComplex in);

/**
 ** \brief Double Complex Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double complex we must determine abs i.e. module.
 ** \return |in|.
 **/
double	zabss(doubleComplex in);

/**
 ** \brief Float Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the float array we must determine abs.
 ** \param out : the float array result.
 **/
void	sabsa(float *in, int size, float* out);

/**
 ** \brief Double Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the double array we must determine abs.
 ** \param out : the double array result.
 **/
void	dabsa(double *in, int size, double* out);

/**
 ** \brief Float Complex Array Absolute Value function
 ** Determine the absolute value of in elements.
 ** \param in : the float complex array we must determine abs i.e. module.
 ** \param out : the float complex array result i.e out[n] = |in[n]|.
 **/
void	cabsa(floatComplex *in, int size, float* out);

/**
 ** \brief Double Complex Array Absolute Value function
 ** Determine the absolute value of in.
 ** \param in : the double complex array we must determine abs i.e. module.
 ** \param out : the double complex array result  i.e out[n] = |in[n]|.
 **/
void	zabsa(doubleComplex *in, int size, double* out);

#endif /* !__ABS_H__ */
