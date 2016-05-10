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

void u16cumsuma(uint16 *in1, int row, int column, uint16 *out)
{
	int row_cnt, col_cnt = 0;
	uint16 cumsum = 0;
	for (col_cnt = 0; col_cnt < row; col_cnt++)
	{
		for ( row_cnt = 0; row_cnt < column; row_cnt++)
		{
			cumsum += in1[col_cnt*column+row_cnt];
			out[col_cnt*column+row_cnt] = cumsum;
		}
	}
	
}