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
#include "filt_sinc.h"
void dfilt_sincs(double N,double fc,double* oup)
{
	double no2=(N-1)/2;
	int ino2=(int)no2;
	double wl=fc*2*M_PI;
	int sz=N;	
	double xn[sz];
	double i;
	int l,m;
	for(i=-no2;i<=no2;i++)
	{
	    l=i+no2;
	    xn[l]=sin(wl*i);
	}
	double xd[sz];
	double j;
	printf("\n");
	for(j=-no2;j<=no2;j++)
	{
	    m=j+no2;
	    xd[m]=M_PI*j;
	}
	if(ino2==no2)
	{
	xn[(int)no2]=2*fc;
	xd[(int)no2]=1;
	}
	double x[sz];
	int k;
	for(k=0;k<N;k++)
	{
	oup[k]=xn[k]/xd[k];
	}
}
/*
int main()
{
	int n;
	double fl;
	n=5;
	fl=0.2;
	filt_sinc(n,fl);
}
*/
