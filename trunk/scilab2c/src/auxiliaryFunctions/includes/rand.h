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

#ifndef __RAND_H__
#define __RAND_H__

#include <math.h>

#include "floatComplex.h"
#include "doubleComplex.h"

/**
 ** \brief Float Rand function
 ** \return A random float.
 **/
float		srands(void);

/**
 ** \brief Double Rand function
 ** \return A random double.
 **/
double		drands(void);

/**
 ** \brief Float Complex Rand function
 ** \return A random float complex.
 **/
floatComplex	crands(void);

/**
 ** \brief Double Complex Rand function
 ** \return A random double complex.
 **/
doubleComplex	zrands(void);

/**
 ** \brief Float Array Rand function
 ** \return A random float array.
 **/
void		sranda(float *out, int size);

/**
 ** \brief Double Array Rand function
 ** \return A random double array.
 **/
void		dranda(double *out, int size);

/**
 ** \brief Float Complex Array Rand function
 ** \return A random float complex array.
 **/
void		cranda(floatComplex *out, int size);

/**
 ** \brief Double Complex Array Rand function
 ** \return A random double complex array.
 **/
void		zranda(doubleComplex *out, int size);



#endif /* !__RAND_H__ */
