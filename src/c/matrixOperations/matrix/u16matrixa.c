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

#include "matrix.h"
#include "types.h"
#include "uint16.h"

void u16matrixa(uint16 *in, int irow, int icolumn, int orow, int ocolumn ,uint16 *out)
{
	int i;
		if(irow*icolumn==orow*ocolumn)
			{
                            for(i=0;i<irow*icolumn ; i++)
				{
					out[i]=in[i];
				}
			}
		else
			{
				printf("The given dimensions are not valid for matrix reshaping");
			}
}
