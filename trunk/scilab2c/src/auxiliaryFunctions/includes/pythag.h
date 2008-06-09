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

#ifndef __PYTHAG_H__
#define __PYTHAG_H__

#include "sqrt.h"

/*
** \brief Float Pythag function
*/
float		spythags(float x, float y);

/*
** \brief Double Pythag function
*/
double		dpythags(double x, double y);

/*
** \brief Float Complex Pythag function
*/
floatComplex	cpythags(floatComplex x, floatComplex y);

/*
** \brief Double Complex Pythag function
*/
doubleComplex	zpythags(doubleComplex x, doubleComplex y);

#endif /* !__PYTHAG_H__ */
