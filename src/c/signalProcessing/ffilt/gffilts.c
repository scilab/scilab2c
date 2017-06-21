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
#include "ffilt.h"
void gffilts(char* ft,int size,double N,double fc,double fh,double* oup)
{
	int sz=N;
	double X[sz];
	double no22=(N-1)/2;
	int ino22=(int)no22;
	if(ft[0]=='l')
	{
		dfilt_sincs(N,fc,X);
		int k=0;
		for(k=0;k<sz;k++)
		{
			oup[k]=X[k];
		}
	}
	else if(ft[0]=='h')
	{
		int k=0;
		dfilt_sincs(N,fc,X);
		for(k=0;k<sz;k++)
		{
			oup[k]=-1*X[k];	
		}
		int id=no22;
		oup[id]=1+oup[id];
	}
	else if(ft[0]=='b')
	{
		double wc=M_PI*(fh+fc);
		fc=(fh-fc)/2;
		dfilt_sincs(N,fc,X);
		double Y[sz];
		double k=0;
		for(k=-no22;k<=no22;k++)	
		{
			int ind;
			ind=k+no22;
			Y[ind]=2*cos(wc*k);
		}
		int j=0;
		for(j=0;j<sz;j++)
		{
			oup[j]=X[j]*Y[j];
		}
	}
	else if(ft[0]=='s')
	{
		double wc=M_PI*(fh+fc);
		fc=(fh-fc)/2;
		dfilt_sincs(N,fc,X);
		double Y[sz];
		double k=0;
		for(k=-no22;k<=no22;k++)	
		{
			int ind;
			ind=k+no22;
			Y[ind]=2*cos(wc*k);
		}
		int j=0;
		for(j=0;j<sz;j++)
		{
			oup[j]=-1*X[j]*Y[j];
		}
		int id=no22;
		oup[id]=1+oup[id];
	}
}
/*
int main()
{
	string s;
	int n;
	double fl,fh;
}
*/
