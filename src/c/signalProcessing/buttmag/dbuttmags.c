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
#include "buttmag.h"
void dbuttmags(double order, double omegac,double* sample,int size,double* out)
{
	double ones[size];
	int j,k;
	for(j=0;j<size;j++)
	{
	ones[j]=1.0;
	}
	//double h[size];
	for(k=0;k<size;k++)
	{
	double x=ones[k]/(ones[k]+pow((sample[k]/omegac),(2*order)));
	out[k]=x;
	//printf("%lf\n",h[k]);
	}
	
}

