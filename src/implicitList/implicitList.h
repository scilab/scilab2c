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

#ifndef __IMPLICITLIST_H__
#define __IMPLICITLIST_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Create implicit Lists with scilab syntax
** start:step:end
** or start:end <=> start:1:end
*/

void simplicitLists(float start, float step, float end, float *out);

void dimplicitLists(double start, double step, double end, double *out);

void cimplicitLists(floatComplex start, floatComplex step, floatComplex end, float *out);

void zimplicitLists(doubleComplex start, doubleComplex step, doubleComplex end, double *out);

#endif /* !__IMPLICITLIST_H__ */
