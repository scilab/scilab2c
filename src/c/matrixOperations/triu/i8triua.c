// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

//Function to extract lower triagular entries from given matrix

#include "triu.h"

void i8triua (int8 *in, int row, int column, double diag, int8 *out)
{
	int row_counter, col_counter = 0;

	for(row_counter=0; row_counter < row; row_counter++)
	{
		for(col_counter=0; col_counter < column; col_counter++)
		{
			if((double)(row_counter + diag) <= (double)col_counter)
			{
				out[col_counter*row+row_counter] = in[col_counter*row+row_counter];
			}
			else
			{
				out[col_counter*row+row_counter] = 0;	
			}
		}
	}
}