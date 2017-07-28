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

void dnanmaxcola(double *in, int row, int col, double* out1, double* out2)
{
    double inter[col]; 


for(int i=0; i< row; i++)
	{
		for(int j=0 ; j< col; j++)
			{
				inter[j]= in[i+ (j*row)];
				
			}
     out1[i]= dnanmax2a( inter, col, &out2[i]);
	
	}


}
