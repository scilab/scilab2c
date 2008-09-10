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
