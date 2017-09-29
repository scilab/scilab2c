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

double dnanmina(double* in, int row, int col, double* pos)
{
    double low = 0;
    int ival = 0, nanflag = 1;

    for(int i = 0; i<row*col; i++)
    {
	if(!(isnan(in[i])))
	{
	    low = in[i];
	    nanflag = 0;
	    break;
	}
    }

    for(int i = 0; i<row*col; i++)
    {
        if(!(isnan(in[i])))
        {
            if(in[i]<low)
	    {
		low = in[i];
		ival = i;
	    }
        }
    }

    pos[0] = ival % row + 1;
    pos[1] = ival / row + 1;

    if (nanflag == 1)
	return 0.0/0.0;

    return low;
}

