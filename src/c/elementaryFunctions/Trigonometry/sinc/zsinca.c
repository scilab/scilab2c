/* Copyright (C) 2016 - IIT Bombay - FOSSEE

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
#include "sinc.h"
#include "sin.h"
#include "doubleComplex.h"
#include "division.h"
void zsinca(doubleComplex* sample,int size,doubleComplex* oup)
{
	int j;
	double r,i;
	for(j=0;j<size;j++)
	{
	r=zreals(sample[j]);
	i=zimags(sample[j]);
	if(r==0 && i==0)
	{
	oup[j]=DoubleComplex(1,0);
	}
	else
	{
	oup[j]=zrdivs(zsins(sample[j]),sample[j]);
	}
	}
}
