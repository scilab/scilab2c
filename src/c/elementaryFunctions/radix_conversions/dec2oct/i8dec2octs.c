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
#include <string.h>
#include <math.h>
#include "dec2oct.h"
#include <stdio.h>

void i8dec2octs(int8 in,int8* out)
{
	int i=0,j=0,tmp=0;
	int quotient;
	quotient=(int)in;
	while(quotient!=0)
	{
		out[i++]= quotient%8;
        	quotient=quotient/8;
	}
	j=i-1;
	i=0;
	
	while(i<j)
	{
		tmp=out[i];
		out[i]=out[j];
		out[j]=tmp;
		i++;
		j--;
	}	
}
