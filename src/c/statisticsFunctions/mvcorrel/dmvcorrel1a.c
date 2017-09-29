/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#include "mvcorrel.h"
#include "stdlib.h"
#include "stdio.h"
#include "types.h"
#include "uint16.h"
#include "zeros.h"
#include "sum.h"
#include "ones.h"
#include "matrixMultiplication.h"
#include "matrixTranspose.h"
#include "subtraction.h"
#include "division.h"

double dmvcorrel1a(int lx, int cx)
{
 if(lx==1 && cx==1)
	return 0;

 else
	return 1;
}
