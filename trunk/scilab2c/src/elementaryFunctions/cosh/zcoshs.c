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

/** cosh(z) = cos(i z) */

#include "cosh.h"
#include "cos.h"

doubleComplex		zcoshs(doubleComplex z) {

  return (zcoss(DoubleComplex(-zimags(z), zreals(z))));
}
