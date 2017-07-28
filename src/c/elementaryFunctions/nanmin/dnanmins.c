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
#include "nanmin.h"

double dnanmins(double in, double* pos)
{
    pos[0] = 1;
    pos[1] = 1;
    
    if(isnan(in))
    {
	pos[0] = 0;
	pos[1] = 0;
	return 0;
    }

    return in;
}

