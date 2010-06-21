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

#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"

doubleComplex	zsins(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  return(DoubleComplex(dsins(real) * dcoshs(imag), dcoss(real) * dsinhs(imag)));
}
