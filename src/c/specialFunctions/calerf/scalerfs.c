/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "erf.h"
#include "erfc.h"
#include "erfcx.h"

float scalerfs (float inp1, double inp2)
{
    if (inp2 == 0)    
	return erf(inp1);
    if (inp2 == 1)
	return derfcs(inp1);
    if (inp2 == 2)
	return derfcxs(inp1);
}

