/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Shamik Guha
 Email: toolbox@scilab.in
*/
#include "bin2dec.h"

void i8bin2deca(int8* in,int size,int8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=i8bin2decs(in[i]);
	}
}
