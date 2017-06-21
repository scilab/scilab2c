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

#include "csch.h"
#include "sinh.h"
#include "sin.h"
#include <math.h>
#include "doubleComplex.h"
#include "division.h"

doubleComplex zcschs(doubleComplex z)
{
	
	doubleComplex out;
	out = zrdivs(DoubleComplex(1,0),zsinhs(z));
	return out;
}
