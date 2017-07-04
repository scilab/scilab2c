/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ukasha Noor
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/


#include "idct.h"
#include "addition.h"
#include "types.h"
#include "floatComplex.h" 
/*#include "matrixMultiplication"*/
/*#include <fftw3.h>*/
#include <math.h>

void cidcta(floatComplex *in,int row,int col,floatComplex *out)
{
	int i,j,k,u,v;
	int n=col;
	int x,y;
	float res,ress;
	float re,z,q,m;
	floatComplex accu = FloatComplex(0, 0);
	floatComplex temp,mm;
	if(row==1)
	{
		res=1./sqrt(n);
		ress=sqrt(2./n);
		for(u=0;u<row;u++)
		{
			for(v=0;v<col;v++)
			{
				x=v*row+u;
				out[x]=FloatComplex(0,0);
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						y=row*j+i;		
						if(y==0)
						{
							q=res*(cos(((M_PI)*(j)*(v+1./2.))/n));
							out[x]=cadds(out[x],in[y]*q);
						}
						else
						{
							q=ress*(cos(((M_PI)*(j)*(v+1./2.))/n));
							out[x]=cadds(out[x],in[y]*q);
						}
					}
				}
			}
			
		}
	}	
	else	
	{
		for(u=0;u<row;u++)
		{
			for(v=0;v<col;v++)
			{
				x=v*row+u;
				out[x]=FloatComplex(0,0);
				for(i=0;i<row;i++)
				{
					re=0;
					mm=FloatComplex(0,0);
					temp=FloatComplex(0,0);
					for(j=0;j<col;j++)
					{
						y=row*j+i;
						mm=in[j*row+i];
						z=(float)(((float)v+1.0/2.0)*(float)j);
						q=(float)(M_PI/(float)col);	
						mm=mm*(cos(q*z));
						if(j==0)
						temp=cadds(temp,mm*(1./sqrt((float)col)));
						else
						temp=cadds(temp,mm*sqrt(2./col));
					}
					z=(float)(((float)u+1.0/2.0)*(float)i);
					q=(float)(M_PI/(float)row);	
					if(i==0)
					out[x]=cadds(out[x],temp*((cos(z*q))*(1./sqrt(row))));
					else
					out[x]=cadds(out[x],temp*((cos(z*q))*sqrt(2./row)));
				}
			}
		}
	}					
}
