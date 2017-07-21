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


#include "nanmax.h"
#include "types.h"
#include "uint16.h"
#include "doubleComplex.h"

void znanmaxrowa(doubleComplex *in, int row, int col, doubleComplex* out)
{
    doubleComplex inter[row]; 



for(int i=0; i< col; i++)
	{
		for(int j=0 ; j< row; j++)
			{
				inter[j]= in[j+ (i*row)];
				
			}
     out[i]= znanmaxa( inter, row);
	
	}


}
