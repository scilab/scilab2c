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
#include "sincd.h"
//#define PI 3.14159265358979
void dsincds(double n,double flg,double* oup)
{
	double npt=4*n;
	int sz=4*n;
	double PI=M_PI;
	double pas=PI/npt;
	double om[sz+1];
	int i;
	for(i=0;i<=sz;i++)
	{
	om[i]=i*pas;
	}
	double eps=pow(-1,(n-1));
	double s1[sz+1],s2[sz+1];
	double s[2*(sz)+1];
	double sr[2*(sz)+1];
	if(flg==1)
	{
	int j,k;
	for(j=0;j<=4*n;j++)
	{
	s1[j]=sin(n*om[j]);
	s2[j]=sin(om[j]);
	}
	s1[0]=n;
	s2[0]=1;
	s1[sz]=n*eps;
	s2[sz]=1;
	
	for(k=0;k<=4*n;k++)
	{
	s[k]=s1[k]/s2[k];
	}
	
	int x;
	for(x=0;x<=4*n;x++)
	{
	    oup[sz-x]=s[x];
	}
	int l;
	for(l=4*n+1;l<=8*n;l++)
	{
	oup[l]=s[l-(sz)];
	}
	int m;
	for(m=0;m<=8*n;m++)
	{
	oup[m]=oup[m]/n;
	}
	}
	else
	{
	int a;
	for(a=0;a<=4*n;a++)
	{
	om[a]=om[a]-(PI/(2*n));
	}
	int j,k;
	for(j=0;j<=4*n;j++)
	{
	s1[j]=sin(n*om[j]);
	s2[j]=sin(om[j]);
	}
	s1[2]=n;
	s2[2]=1;
	for(k=0;k<=4*n;k++)
	{
	s[k]=s1[k]/s2[k];
	}
	int m;
	for(m=0;m<=4*n;m++)
	{
	oup[m]=(eps*s[m])/n;
	}
	int l;
	for(l=4*n+1;l<=8*n;l++)
	{
	oup[l]=s[l-(sz)]/n;
	}
	
	}
}

