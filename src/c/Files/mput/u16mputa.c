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

/*Function ot write 'uint16' array/matrix in given file */

#include "files.h"
 
int u16mputa (FILE *fptr, uint16 *data, int row, int col)
{
	int res = 0, row_ctr, col_ctr;

	if(fptr != NULL)
	{
		for(row_ctr = 0; row_ctr < row; row_ctr++)
		{
			for(col_ctr = 0; col_ctr < col; col_ctr++)
			{
				res += fprintf(fptr, "%d ", data[row*col_ctr+row_ctr]);				
			}
			fprintf(fptr, "\n");
		}
	}
	return res;
}