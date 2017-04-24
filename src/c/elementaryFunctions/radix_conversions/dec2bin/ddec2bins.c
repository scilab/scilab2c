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
#include "dec2bin.h"
#include <stdio.h>
void ddec2bins(double in,int n,double* out)
{
	int quotient,i=0,j=0,tmp=0;
	quotient=(int)in;
	for(i=0;i<n;i++)
	{
		out[i]=0.0;
	}
	i=0;
	while(quotient!=0)
	{
		out[i++]= quotient%2;
        	quotient=quotient/2;
	}
	if(n>i-1)
	{
		for(j=i;j<=n;j++)
			out[j]=0.0;
	}
	if(n==0)
		j=i-1;
	else
		j=n-1;

		i=0;
	
	while(i<j)
	{
		tmp=out[i];
		//printf("%f",tmp);
		out[i]=out[j];
		out[j]=tmp;
		i++;
		j--;
	}
}
