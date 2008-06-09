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

#include "complex.h"
#include "pythag.h"

floatComplex	cpythags(floatComplex x, floatComplex y) {
  return (csqrts( cadds(ctimess(x,x),
			ctimess(y,y)) ));
}
