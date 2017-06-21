/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#include<stdio.h>
#include<math.h>
#include "cheb2mag.h"
void dcheb2mags(double n,double omegar, double A, double* sample,int size,double* oup)
{
	double e;
	//e=sqrt(A*A-1);
	e=1/(pow(10,A/10)-1);
	double x,k,cn,h,tp;
	int i;
	for(i=0;i<size;i++)
	{
            x=omegar/sample[i];
	    if(x<=1)
	    {
	        tp=acos(x);
		cn=cos(n*tp);
	        if(x==1)
	        {
	        h=1/(1+A*A-1);
		}
		else
		{
	        h=1/(1+((A*A-1)/(cn*cn)));
		}
	
	    }
	    else
	    {  
	        tp=acosh(x);
		cn=cosh(n*tp);
		h=e*(cn*cn)/(1+e*(cn*cn));
	
	    }
	oup[i]=h;
	}
}

