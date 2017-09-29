/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Brijesh Gupta C R
 Email: toolbox@scilab.in
*/
#include <stdio.h>
#include <math.h>
#include "scaling.h"
#include "ones.h"
#include "matrixMultiplication.h"

void dscalinga (double* inp1, int row, int col, double inp2, double* inp3, int size3, double* out)
{
    double temp[row*col], one[col], prod[row*col], diff[row*col];

    for(int i = 0; i < row*col; i++)
	temp[i] = inp1[i];

    donesa(one, 1, col);

    dmulma(inp3, 2, 1, one, 1, col, prod);

    for(int i = 0; i < row*col; i++)
	diff[i] = inp1[i] - prod[i];

    for(int i = 0; i < row*col; i++)
	out[i] = (inp2 * diff[i]) + prod[i];    
}
