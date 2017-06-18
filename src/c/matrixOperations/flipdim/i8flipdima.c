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

/*Function flips the input matrix along given dimension*/

#include "flipdim.h"

void i8flipdima (int8 *in, int row, int col, int dim, int blk_size, int8 *out)
{
	int col_count = 0, row_count = 0, blk_count = 0, count = 0;
	if(dim == 1) /*flip rows*/
	{
		if(blk_size == 1)
		{
			for(col_count = 0; col_count < col; col_count++)
			{
				for(row_count = 0; row_count< row;row_count++)
				{
					out[col_count*row+row_count] = in[col_count*row+(row - row_count - 1)];
				}
			}
		}
		else /*block size is more than 1*/
		{
			for(col_count = 0; col_count < col; col_count++)
			{
				count = blk_size;
				blk_count = 0;
				for(row_count = 0; row_count< row;row_count++)
				{
					out[col_count*row+row_count] = in[col_count*row+(row - blk_count*blk_size - count)];
					if(--count == 0)
					{
						blk_count += 1;
						count = blk_size;
					}
				}
			}
			
		}
	}
	else if(dim == 2) /*flip columns*/
	{
		if(blk_size == 1)
		{
			for(col_count = 0; col_count < col; col_count++)
			{
				for(row_count = 0; row_count< row;row_count++)
				{
					out[col_count*row+row_count] = in[(col- col_count - 1)*row+row_count];
				}
			}
		}
		else
		{
			count = blk_size;
			blk_count = 0;
			for(col_count = 0; col_count < col; col_count++)
			{
				for(row_count = 0; row_count< row;row_count++)
				{
					out[col_count*row+row_count] = in[(col - blk_count*blk_size - count)*row+row_count];
				}
				if(--count == 0)
				{
					count = blk_size;
					blk_count += 1;
				}
			}	
		}
	}
}