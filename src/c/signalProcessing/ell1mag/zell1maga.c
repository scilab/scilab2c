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
#include "modsn.h"
#include "ell1mag.h"
#include "doubleComplex.h"

void zell1maga(double eps,double m1,doubleComplex* z,int size,double* oup )
{
	doubleComplex s[size];
	int i;
	for(i=0;i<size;i++)
	{
	s[i]=zmodsns(z[i],m1);
	}
	double un[size];
	int j;
	for(j=0;j<size;j++)
	{
	un[j]=1;
	}
	doubleComplex v;
	int k;
	for(k=0;k<size;k++)
	{
	v=un[k]/(un[k]+(eps*eps*s[k]*s[k]));
	oup[k]=zreals(v);
	}
}
	
