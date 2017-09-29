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
#include <isreal.h>

char sisequala(float* inp1, int size1r, int size1c, float* inp2, int size2r, int size2c)
{
    if ((size1r != size2r) && (size1c != size2c))
        return 'F';
    else
    {
	int i, f = 0;
	for (i = 0; i<size1r*size1c; i++)
	{
	    if (inp1[i] != inp2[i])
		{
		    f = 1;
		    break;
		}
	}
	
	if (f == 1)
	    return 'F';
	else
	    return 'T';
    }
}

