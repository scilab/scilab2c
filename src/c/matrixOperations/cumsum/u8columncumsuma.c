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

//Function returns cumulative sum of members of array/matrix

#include "cumsum.h"
#include "types.h"

void u8columncumsuma(uint8 *in1, int row, int column, uint8 *out)
{
	int row_cnt, col_cnt = 0;
	
	//Assign elements in first column as it is
	for(row_cnt = 0; row_cnt < row; row_cnt++)
	{
		out[row_cnt] = in1[row_cnt];
	}

	//For second column onwards
	for (row_cnt = 0; row_cnt < row; row_cnt++)
	{
		for ( col_cnt = 1; col_cnt < column; col_cnt++)
		{
			
			out[col_cnt*row+row_cnt] = in1[col_cnt*row+row_cnt] \
											+ out[(col_cnt-1)*row+row_cnt];
		}
	}
	
}