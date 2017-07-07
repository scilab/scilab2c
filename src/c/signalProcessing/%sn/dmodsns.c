/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 Reference:- Abramowitz, Milton and Stegun, Irene A
             Handbook of Mathematical Functions, Dover, 1965
             Chapter 16 (Sections 16.4, 16.13 and 16.15)
	Link for FORTRAN code:-http://www.aip.de/groups/soe/local/numres/bookfpdf/f6-11.pdf
*/

#include<stdio.h>
#include<math.h>
#define CA 0.0003
#include "modsn.h"
double dmodsns(double uu, double emmc)
{
	double a,b,c,d,emc,u;
	double em[14],en[14];
	int i,ii,l,bo;
	double sn,cn,dn;
	emc=1-emmc;
	u=uu;
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
		dn=1.0;
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
		sn=sin(u);
		cn=cos(u);
		if(sn)
		{
			a=cn/sn;
			c*=a;
			for(ii=l;ii>=1;ii--)
			{
				b=em[ii];
				a*=c;
				c*=dn;
				dn=(en[ii]+a)/(b+a);
				a=c/b;
			}
			a=1.0/sqrt(c*c+1.0);
			sn=(sn>=0.0?a:-a);
			cn=c*(sn);
		}
		if(bo)
		{
			a=dn;
			dn=cn;
			cn=a;
			sn/=d;
		}
	}
	else
	{
		cn=1.0/cosh(u);
		dn=cn;
		sn=tanh(u);
	}
	return sn;
}

