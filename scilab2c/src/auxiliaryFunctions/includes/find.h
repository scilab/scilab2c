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

/*
** \brief Float Find function
*/
void sfinda(float* x, int size, float *out, int *sizeOut);

/*
** \brief Double Find function
*/
void dfinda(double*x, int size, double *out, int *sizeOut);

/*
** \brief Float Complex Find function
*/
void cfinda(floatComplex* z, int size, float *out, int *sizeOut);

/*
** \brief Double Complex Find function
*/
void zfinda(doubleComplex* z, int size, double *out, int *sizeOut);
#endif /* !__FIND_H__ */
