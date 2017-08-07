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
 
#include "pertrans.h"
#include "types.h"
#include "matrixTranspose.h"

void spertransa(float *in, int row, int col, float* out)
{
			
	float middle[row*col];
	int j=0;

	stransposea(in, row, col, middle);

	for(int i= row*col-1; i>=0; i=i-1)
		{

                 out[j]= middle[i];
		 j=j+1;

		}




}
