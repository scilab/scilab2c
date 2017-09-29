/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ukasha Noor
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "gcd.h"
#include "types.h"

int8 u8gcds(int8 *in,int size)
{
	int a=in[0];
	int b=in[1];
	while(a!=b && a!=0 && b!=0)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return b;
}
