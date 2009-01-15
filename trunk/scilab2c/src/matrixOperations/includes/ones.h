/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */


#ifndef __ONES_H__
#define __ONES_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief create a float one value
*/
#define seyes(in)		1.0f

/*
** \brief create a Double one value
*/
#define deyes(in)		1.0

/*
** \brief create a float complex one value
*/
#define ceyes(in)		FloatComplex(1.0f, 0)

/*
** \brief create a Double complex one value
*/
#define zeyes(in)		DoubleComplex(1, 0)



/*
** \brief create a float matrix full of one
*/
void sonesa ( float* in , int rows , int cols );
/*
** \brief create a float complex matrix full of one
*/
void conesa ( floatComplex* in , int rows ,int cols );
/*
** \brief create a double  matrix full of one
*/
void donesa ( double* in , int rows ,int cols );
/*
** \brief create a double complex  matrix full of one
*/
void zonesa ( doubleComplex* in , int rows ,int cols );

#endif /* !__ONES_H__ */
