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
#include "amell.h"
#define N 30
#define DBL_EPSILON 2.2204460492503131E-16


double damells(double u,double x)
{
	 double a[N+1];
	 double g[N+1];
	 double c[N+1];
	 double two_n;
	 double phi;
	 double k;
	int n;
	k=(long double)fabs(x);
	if(k==1.0)
	return 0;
	if(k>1.0)
	printf("Wrong type of input argument type #2");
	
	a[0]=1.0;
	g[0]=sqrt(1.0-k*k);
	c[0]=k;
	two_n=1.0;
	for(n=0;n<N;n++)
	{
	if(fabs(a[n]-g[n])<(a[n]*DBL_EPSILON))
	{
	break;
	}
	two_n+=two_n;
	a[n+1]=0.5*(a[n]+g[n]);
	g[n+1]=sqrt(a[n]*g[n]);
	c[n+1]=0.5*(a[n]-g[n]);
	}
	phi=two_n*a[n]*u;
	for(;n>0;n--)
	{
	phi=0.5*(phi+asin(c[n]*sin(phi)/a[n]));
	}
	return (double)phi;
}

