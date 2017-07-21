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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "nanmax.h"
#include "types.h"
#include "doubleComplex.h"
#include "abs.h"

doubleComplex znanmaxa(doubleComplex* in, int size)
{
doubleComplex high=0; int k=0;
for(int i=0; i<size; i++)
{
	if( !(isnan(in[i])) )
	{
	high= in[i];
	 break;
         k= 1;
	}
}


	
	for(int i=0; i< size; i++)
		{
			if( !(isnan(in[i])) )
				{
					if( zabss(in[i]) > zabss(high))
						{
							high= in[i];
	
						}

		
				}


		}
		

if(k != 0)
return high;
else
return - 0.0/0.0;	
}
