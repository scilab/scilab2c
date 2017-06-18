/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include <math.h>
#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"
#include "csc.h"
#include "doubleComplex.h"
#include "division.h"

doubleComplex zcscs(doubleComplex z)
{
	double real = zreals(z);
	double imag = zimags(z);
	return zrdivs(DoubleComplex(1,0),(DoubleComplex(dsins(real) * dcoshs(imag), dcoss(real) * dsinhs(imag))));
}
