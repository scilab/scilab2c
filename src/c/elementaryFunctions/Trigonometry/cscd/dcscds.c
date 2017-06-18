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

#ifdef _WIN32
	#define _USE_MATH_DEFINES
#endif

#include "cscd.h"
#include <math.h>

double dcscds(double in)
{
	double val;
	val = (M_PI) / 180.0;
   	double out;
	out=1/sin(in*val);
	return out;
}
