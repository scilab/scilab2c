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


#include "gsort.h"
#include "types.h"
#include "uint16.h"

void u16gsortrowa(uint16 *in, int row, int col, char check, uint16* out)
{
    uint16 inter[row]; 
    uint16 temp[row];


for(int i=0; i< col; i++)
	{
		for(int j=0 ; j< row; j++)
			{
				inter[j]= in[j+ (i*row)];
				
			}
        	u16gsorta( inter, row, check, temp);

		for(int k=0; k< row; k++)
			{
                  		out[k + i*row]= temp[k]; 

			}
	
	}


}
