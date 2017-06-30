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
#include "cheb1mag.h"
void dcheb1mags(double n, double omegac, double epsilon, double* sample,int size,double* out)
{
	double x;
	int j;
	double tn;
	for(j=0;j<size;j++)
	{
	x=sample[j]/omegac;
	if(x<=1)
	{
	tn=cos(n*acos(x));
	out[j]=1/(1+(epsilon*epsilon)*(tn*tn));
	}
	else
	{
	tn=cosh(n*acosh(x));
	out[j]=1/(1+(epsilon*epsilon)*(tn*tn));
	}
	}
}

