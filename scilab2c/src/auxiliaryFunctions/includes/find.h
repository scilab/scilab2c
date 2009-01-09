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

#ifndef __FIND_H__
#define __FIND_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "notFound.h"

/*
** \brief Float Find function
*/
float* sfinda(float* x, int size);

/*
** \brief Double Find function
*/
double* dfinda(double*x, int size);

/*
** \brief Float Complex Find function
*/
float* cfinda(floatComplex* z, int size);

/*
** \brief Double Complex Find function
*/
double* zfinda(doubleComplex* z, int size);
#endif /* !__FIND_H__ */
