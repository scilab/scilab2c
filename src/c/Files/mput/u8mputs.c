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

/*Function ot write 'uint8' scalar in given file */

#include "files.h"
 
int u8mputs (FILE *fptr, uint8 data)
{
	int res;

	if(fptr != NULL)
	{
		res = fprintf(fptr, "%d\n", data);
	}
	return res;
}