/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 
/*Function for kroneker product of two matrices*/

#include "kron.h"

void dkrona (double *in1, int row1, int col1, double *in2, int row2, \
			int col2, double *out)
{
	int row1_count, col1_count,row2_count, col2_count;
	int row = row1*row2, col = col1*col2;
	int temp = 0;

	for(col1_count = 0;col1_count < col1; col1_count++)
	{
		for(row1_count = 0;row1_count < row1; row1_count++)
		{
			for(col2_count = 0;col2_count < col2; col2_count++)
			{
				for(row2_count = 0;row2_count < row2; row2_count++)
				{
					temp = (col1_count*col2+col2_count)*row+(row1_count*row2+row2_count);
					out[temp] = in1[col1_count*row1+row1_count]*in2[col2_count*row2+row2_count];
				}
			}			
		}
	}

}