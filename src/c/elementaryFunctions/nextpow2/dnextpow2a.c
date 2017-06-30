/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Ukasha Noor
 Email: toolbox@scilab.in
*/

#include "nextpow2.h"
#include <math.h>

void dnextpow2a(double *in,int size,double *out)
{
	int i,j,s;
	double k;
	i=2;
	for(s=0;s<size;s++)
	{
		j=-1;
		do{
			j++;	
			k=pow(i,j);
		}while(in[s]>k);
		out[s]=j;
	}
}
