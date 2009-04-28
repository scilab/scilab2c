/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Arnaud Torset
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <math.h>
#include "fix.h"

doubleComplex zfixs(doubleComplex x) {
	double fixReal = 0, fixImag = 0;
	
	if (zreals(x)>=0)	fixReal = floor(zreals(x));
	else fixReal = ceil(zreals(x));
	
	if (zimags(x)>=0)	fixImag = floor(zimags(x));
	else fixImag = ceil(zimags(x));
	
	return DoubleComplex(fixReal, fixImag);
}
