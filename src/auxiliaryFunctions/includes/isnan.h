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

#ifndef __IS_NAN_H__
#define __IS_NAN_H__

#include <stdbool.h>
#include <math.h>

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** \brief Float Is Nan function
*/
bool	sisnans(float x);

/*
** \brief Double Is Nan function
*/
bool	disnans(double x);

/*
** \brief Float Complex Is Nan function
*/
bool	cisnans(floatComplex z);

/*
** \brief Double Complex Is Nan function
*/
bool	zisnans(doubleComplex z);
#endif /* !__IS_NAN_H__ */
