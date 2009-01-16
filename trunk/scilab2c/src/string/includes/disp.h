/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */



#ifndef __DISP_H__
#define __DISP_H__

#include <stdio.h>
#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief display of a float scalar 
*/
double sdisps (float in);

/*
** \brief display of a double scalar
*/
double ddisps (double in);

/*
** \brief display of a float complex
*/
double cdisps (floatComplex in);

/*
** \brief display of a double complex
*/
double zdisps (doubleComplex in);

/*
** \brief display of a float scalar array
** \param in the float scalar array to display
** \param size the size of the array
*/
double sdispa (float* in, int size);

/*
** \brief display of a double scalar array
** \param in the double scalar array to display
** \param size the size of the array
*/
double ddispa (double* in, int size);

/*
** \brief display of a float complex array
** \param in the float complex array to display
** \param size the size of the array
*/
double cdispa (floatComplex* in, int size);

/*
** \brief display of a double complex array
** \param in the double complex array to display
** \param size the size of the array
*/
double zdispa (doubleComplex* in, int size);

#endif /* !__DISP_H__ */
