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
#include "fsfirlin.h"
//#define PI 3.14159265358979

void dfsfirlina(double* hd,int size,double flag,double* hst)
{
	int n1=size,n;
	if( n1%2==0)
	{
	n=2*n1;
	}
	else
	{
	n=2*n1+1;
	}
	double scd[8*n+1];
	//STRAT SINCD
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
	if(flag==1)
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
	    scd[sz-x]=s[x];
	}
	int l;
	for(l=4*n+1;l<=8*n;l++)
	{
	scd[l]=s[l-(sz)];
	}
	int m;
	for(m=0;m<=8*n;m++)
	{
	scd[m]=scd[m]/n;
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
	scd[m]=(eps*s[m])/n;
	}
	int l;
	for(l=4*n+1;l<=8*n;l++)
	{
	scd[l]=s[l-(sz)]/n;
	}
	}
	//END SINCD
	int ii;
	for(ii=4*n;ii<=6*n;ii++)
	{
	hst[ii-(4*n)]=hd[0]*scd[ii];
	}
	
	int epsi;
	epsi=pow(-1,n-1);
	int jj;
	for(jj=1;jj<=(n1-1);jj++)
	{
	double tp1[2*n+1];
	double tp2[2*n+1];
	int k,l;
	for(k=(-4*jj+4*n);k<=(-4*jj+6*n);k++)
	{
	tp1[k-(-4*jj+4*n)]=hd[jj]*scd[k];
	}
	
	for(l=(4*jj);l<=(4*jj+2*n);l++)
	{
	tp2[l-(4*jj)]=hd[jj]*(epsi*scd[l]);
	}
	int m;
	for(m=0;m<=2*n;m++)
	{
	hst[m]=hst[m]+(tp1[m]+tp2[m]);
	}
	
	}
		
	
}
