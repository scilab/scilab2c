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


#include "interp1.h"
#include <string.h>

void dinterp13a(double *x,int size1,double *fx,int size2,double *q,int size3,char *ch,int size4,double *out)
{
	int i,j,k,f;
	double a,b;
	if(strcmp(ch,"linear")==0)
	{
		for(i=0;i<size3;i++)
		{
			f=0;
			for(j=0;j<size1;j++)
			{
				if(q[i]==x[j])
				{
					out[i]=fx[j];
					f=1;
					break;
				}
			}
			if(f==0)
			{
				j=0;
				while(q[i]>x[j])
				{
					j++;
				}
				a=x[j-1];
				b=x[j];
				out[i]=fx[j-1]+(q[i]-a)*((fx[j]-fx[j-1])/(b-a));
			}
		}
	}
	else if(strcmp(ch,"nearest")==0)
	{
		for(i=0;i<size3;i++)
		{
			f=0;
			for(j=0;j<size1;j++)
			{
				if(q[i]==x[j])
				{
					out[i]=fx[j];
					f=1;
					break;
				}
			}
			if(f==0)
			{
				j=0;
				while(q[i]>x[j])
				{
					j++;
				}
				out[i]=fx[j];
			}
		}
	}
}
			
		
