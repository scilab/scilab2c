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
#include "ndgrid.h"

void dndgrida(double* inp1, int size1, double* inp2, int size2, double* out1, double* out2)
{
    for(int i = 0; i < size2; i++)
    {
	for(int j = 0; j < size1; j++)
	    out1[j + i*size1] = inp1[j];
    }

    for(int i = 0; i < size2; i++)
    {
	for(int j = 0; j < size1; j++)
	    out2[j + i*size1] = inp2[i];
    }
}
