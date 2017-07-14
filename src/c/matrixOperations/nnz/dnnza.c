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
 
/*Function returns cumulative sum of members of array/matrix*/

#include "nnz.h"
#include "types.h"
#include "uint16.h"

uint16 dnnza(double *in, int irow, int icolumn)
{
	int i; 
	uint16 final=0;
		for(i=0; i< irow*icolumn ; i++)
			{
				if( in[i] != 0)
					{
						final++;
						
					}

			}
return final;
}
