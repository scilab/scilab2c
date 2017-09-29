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
#include "nanmean.h"
#include "doubleComplex.h"
#include "floatComplex.h"

void znanmeancola(doubleComplex *in, int row, int col, doubleComplex* out)
{
    doubleComplex inter[col]; 


for(int i=0; i< row; i++)
	{
		for(int j=0 ; j< col; j++)
			{
				inter[j]= in[i+ (j*row)];
				
			}
     out[i]= znanmeana( inter, col);
	
	}


}
