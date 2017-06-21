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
#include "zpch2.h"
#include "multiplication.h"
#include "abs.h"
#include "division.h"
#define PI 3.14159265
double dzpch2s(double N, double A, double omegar,doubleComplex* zeros,doubleComplex* poles) 
{
	int k,j;
	double e,xk,realVal,gain;
	doubleComplex accumulate1,accumulate2,tp1,tp2;
	accumulate1=DoubleComplex(1,0);	
	accumulate2=DoubleComplex(1,0);
	int ct=0;
	for(k=1;k<=N;k++)
	{
	if(k!=((N+1)/2))
	{
	ct++;
	double num=PI*(2*k-1);
	double den=2*N;
	 xk=cos(num/den);
	double sk=omegar/xk;
	zeros[k-1]=DoubleComplex(0,sk);
	tp1=DoubleComplex(0,sk);
	accumulate1=zmuls(accumulate1,tp1);
	}	
	}
	for(j=1;j<=N;j++)
	{
	double num=PI*(2*j-1);
	double den=2*N;
	double xk1=num/den;
	double Gamma=pow((A+sqrt(A*A-1)),(1/N));
	double alpha=-((Gamma-1/Gamma)/2)*sin(xk1);
    	double Beta=((Gamma+1/Gamma)/2)*cos(xk1);
    	double normal=alpha*alpha+Beta*Beta;
    	poles[j-1]=DoubleComplex((omegar*alpha)/normal,(omegar*Beta)/normal);
	tp2=DoubleComplex((omegar*alpha)/normal,(omegar*Beta)/normal);
	accumulate2=zmuls(accumulate2,tp2);
	}
	double qt;
	double ra2=zreals(accumulate2);
	double ra1=zreals(accumulate1);	
	qt=dldivs(ra1,ra2);
	gain=dabss(qt);
	
	return gain;
	
}

