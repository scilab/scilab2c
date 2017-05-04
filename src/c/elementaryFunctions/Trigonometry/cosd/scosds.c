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

#include <math.h>
#include "cosd.h"
#include "cos.h"

float		scosds(float in) 
{
	if(cosf((M_PI/180.0)*in)==0.0)
		return 0.0;
	else
		return (cosf((M_PI/180.0)*in));
}
