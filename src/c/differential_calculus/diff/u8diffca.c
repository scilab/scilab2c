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

 /* This function calculates difference between adjacent members of given 
 input array/matrix */

#include "diffc.h"


void u8diffca(uint8 *in, int row, int col, int depth, int dim, uint8 *out)
{
	int counter, depth_count;
	int row_count, col_count;
	uint8 *buffer; /*To store intermediate results*/

	depth_count = 1;
	
	if(dim == 0)
	{	/*For dim = 0, we calculate difference between adjacent elements 
		in case of arrays. In case of matrices, we calculate difference along
		first column, and then continue to second (diff between first element
		of second column and last element of first column, then third etc.*/
		if(depth == 1)
		{/*for depth=1, a buffer is not needed. Directly write result in 
			out buffer*/
			for(counter = 0;  counter < row*col - depth_count; counter++)
			{
				out[counter] = in[counter+1] - in[counter];
			}
		}
		else
		{	/*define  buffer for storing intermediate results*/
			
			buffer = (uint8 *) malloc (sizeof(uint8)*(row*col-1));
			
			while(depth_count <= depth)
			{
				if(depth_count == 1)
				{
					/*calculate diff and store in buffer*/
					for(counter = 0;  counter < row*col - depth_count; counter++)
					{
						buffer[counter] = in[counter+1] - in[counter];
					}
				}
				else if(depth_count < depth)
				{
					for(counter = 0;  counter <= row*col - depth_count ; counter++)
					{
						buffer[counter] = buffer[counter+1] - buffer[counter];
					}
				}
				/*For last step use output buffer to store result*/
				else 
				{
					for(counter = 0;  counter < row*col - depth_count; counter++)
					{
						out[counter] = buffer[counter+1] - buffer[counter];
					}
				}
				depth_count += 1;
			}
		}
		
	}
	else if(dim == 1) 
	{
		/*For dim = 1, difference is calculated along rows. Each element of 
		first row is subtracted from corresponding element of second row and
		result is stored in first row. Same thing is repeated till last row. */

		if (depth == 1)
		{
			/*If depth is 1, store result directly in out buffer*/
			for(col_count = 0; col_count < col; col_count++)
			{
				for(row_count = 0; row_count < row - 1; row_count++)
				{
					out[col_count*(row-1)+row_count] = in[col_count*row + row_count+1] \
										- in[col_count*row + row_count];
				}
			}
		}
		else
		{
			/*If depth is not 1, declare a buffer to store intermediate 
			results. At last step store result into out buffer*/
			buffer = (uint8 *) malloc (sizeof(uint8)*((row-1)*col));
			
			while(depth_count <= depth)
			{
				if(depth_count == 1)
				{
					/*For first step, use in buffer and store results in buffer*/
					for(col_count = 0; col_count < col; col_count++)
					{
						for(row_count = 0; row_count < row - 1; row_count++)
						{
							buffer[col_count*row+row_count] = in[col_count*row + row_count + 1] \
												- in[col_count*row + row_count];
						}

					}
				}	
				else if(depth_count < depth)
				{
					for(col_count = 0; col_count < col; col_count++)
					{
						for(row_count = 0; row_count < row - depth_count; row_count++)
						{
							buffer[col_count*row+row_count] = buffer[col_count*row + row_count + 1] \
												- buffer[col_count*row + row_count];
						}

					}
				}
				else
				{
					for(col_count = 0; col_count < col; col_count++)
					{
						for(row_count = 0; row_count < row - depth_count; row_count++)
						{
							out[col_count*(row-depth_count)+row_count] = buffer[col_count*row + row_count+1] \
												- buffer[col_count*row + row_count];
						}
					}
				}
				depth_count +=1;
			}
		}
	}
	else if(dim == 2) 
	{
		/*For dim = 2, difference is calculated along columns. Each element of 
		first column is subtracted from corresponding element of second column
		and result is stored in first column. Same thing is repeated till last 
		column. */
		if(depth == 1)
		{
			for(row_count = 0; row_count < row; row_count++)
			{
				for(col_count = 0; col_count < col - 1; col_count++)
				{
					out[col_count*row+row_count] = in[(col_count+1)*row + row_count] \
										- in[col_count*row + row_count];
				}
			}
		}
		else
		{
			/*If depth is not 1, declare a buffer to store intermediate 
			results. At last step store result into out buffer*/
			buffer = (uint8 *) malloc (sizeof(uint8)*(row*(col-1)));
			
			while(depth_count <= depth)
			{
				if(depth_count == 1)
				{
					for(row_count = 0; row_count < row; row_count++)
					{
						for(col_count = 0; col_count < col - 1; col_count++)
						{
							buffer[col_count*row+row_count] = in[(col_count+1)*row + row_count] \
												- in[col_count*row + row_count];
						}
					}	
				}
				else if(depth_count < depth)
				{
					for(row_count = 0; row_count < row; row_count++)
					{
						for(col_count = 0; col_count < col - depth_count; col_count++)
						{
							buffer[col_count*row+row_count] = buffer[(col_count+1)*row + row_count] \
												- buffer[col_count*row + row_count];
						}
					}
				}
				else
				{
					for(row_count = 0; row_count < row; row_count++)
					{
						for(col_count = 0; col_count < col - depth_count; col_count++)
						{
							out[col_count*row+row_count] = buffer[(col_count+1)*row + row_count] \
												- buffer[col_count*row + row_count];
						}
					}
				}
				depth_count += 1;
			}
		}
	}
}
