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

#ifndef __FIND2D_H__
#define __FIND2D_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief Float Find function
*/
void sfind2da(float* x, int rows, int columns, float** out1, float** out2);

/*
** \brief Double Find function
*/
void dfind2da(double*x, int rows, int columns, double** out1, double** out2);

/*
** \brief Float Complex Find function
*/
void cfind2da(floatComplex* z, int rows, int columns, float** out1, float** out2);

/*
** \brief Double Complex Find function
*/
void zfind2da(doubleComplex* z, int rows, int columns, double** out1, double** out2);
#endif /* !__FIND2D_H__ */
