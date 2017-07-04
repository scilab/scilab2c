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
#include "modsn.h"
#include "doubleComplex.h"
#define CA 0.0003


doubleComplex zmodsnsproto(doubleComplex uu,double emmc,doubleComplex* sni)
{
	doubleComplex ans;
	double uur,uui;
	uur=zreals(uu);
	uui=zimags(uu);
	double sr,cr,dr;
        //Performing Elliptic Function operation for the real values
	double a1,b1,c1,d1,emc1,u1;
	double em1[14],en1[14];
	int i1,ii1,l1,bo1;
	emc1=1-emmc;
	u1=uur;
	if(emc1)
	{
	bo1=(emc1<0.0);
		if(bo1)
		{
			d1=1.0-emc1;
			emc1/=-1.0/d1;
			u1*=(d1=sqrt(d1));
		}
		a1=1.0;
		dr=1.0;
		for(i1=1;i1<=13;i1++)
		{
			l1=i1;
			em1[i1]=a1;
			en1[i1]=(emc1=sqrt(emc1));
			c1=0.5*(a1+emc1);
			if(fabs(a1-emc1)<=CA*a1)break;
			emc1*=a1;
			a1=c1;
		}
		u1*=c1;
		sr=sin(u1);
		cr=cos(u1);
		if(sr)
		{
			a1=cr/sr;
			c1*=a1;
			for(ii1=l1;ii1>=1;ii1--)
			{
				b1=em1[ii1];
				a1*=c1;
				c1*=dr;
				dr=(en1[ii1]+a1)/(b1+a1);
				a1=c1/b1;
			}
			a1=1.0/sqrt(c1*c1+1.0);
			sr=(sr>=0.0?a1:-a1);
			cr=c1*(sr);
		}
		if(bo1)
		{
			a1=dr;
			dr=cr;
			cr=a1;
			sr/=d1;
		}
	}
	else
	{
		cr=1.0/cosh(u1);
		dr=cr;
		sr=tanh(u1);
	}
	////////////////////////////////////////////////////////////////
	double si,ci,di;
	//Performing Elleptic Function operation for the imaginary values
	double a,b,c,d,emc,u;
	double em[14],en[14];
	int i,ii,l,bo;
	//double s1,c1,d1;
	emc=emmc;
	u=uui;
	if(emc)
	{
	bo=(emc<0.0);
		if(bo)
		{
			d=1.0-emc;
			emc/=-1.0/d;
			u*=(d=sqrt(d));
		}
		a=1.0;
		di=1.0;
		for(i=1;i<=13;i++)
		{
			l=i;
			em[i]=a;
			en[i]=(emc=sqrt(emc));
			c=0.5*(a+emc);
			if(fabs(a-emc)<=CA*a)break;
			emc*=a;
			a=c;
		}
		u*=c;
		si=sin(u);
		ci=cos(u);
		if(si)
		{
			a=ci/si;
			c*=a;
			for(ii=l;ii>=1;ii--)
			{
				b=em[ii];
				a*=c;
				c*=di;
				di=(en[ii]+a)/(b+a);
				a=c/b;
			}
			a=1.0/sqrt(c*c+1.0);
			si=(si>=0.0?a:-a);
			ci=c*(si);
		}
		if(bo)
		{
			a=di;
			di=ci;
			ci=a;
			si/=d;
		}
	}
	else
	{
		ci=1.0/cosh(u);
		di=ci;
		si=tanh(u);
	}
	/////////////////////////////////////////////////////////
	double delta;
	delta=ci*ci + emmc*sr*sr*si*si;
	double snir,snii;
	snir=(sr*di)/delta;
	snii=(cr*dr*si*ci)/delta;
	*sni=DoubleComplex(snir,snii);
}

void zmodsna(doubleComplex* uu,int size,double emmc,doubleComplex* sn)
{
	int i;
	for(i=0;i<size;i++)
	{
	zmodsnsproto(uu[i],emmc,&sn[i]);
	}
}
