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
/*#include <fftw3.h>*/
#include <math.h>

void sidcta(float *in,int row,int col,float *out)
{
	int i,j,k,u,v;
	int n=col;
	int x,y;
	float res,ress;
	float re,z,q,m;
	if(row==1)
	{
		res=1./sqrt(n);
		ress=sqrt(2./n);
		for(u=0;u<row;u++)
		{
			for(v=0;v<col;v++)
			{
				x=v*row+u;
				out[x]=0;
				for(i=0;i<row;i++)
				{
					for(j=0;j<col;j++)
					{
						y=row*j+i;		
						if(y==0)
						out[x]+=res*in[y]*(cos(((M_PI)*(j)*(v+1./2.))/n));
						else
						out[x]+=ress*in[y]*(cos(((M_PI)*(j)*(v+1./2.))/n));
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
				out[x]=0;
				for(i=0;i<row;i++)
				{
					re=0;
					for(j=0;j<col;j++)
					{
						y=row*j+i;
						m=(float)in[j*row+i];
						z=(float)(((float)v+1.0/2.0)*(float)j);
						q=(float)(M_PI/(float)col);	
						m=m*(cos(q*z));
						if(j==0)
						re+=m/sqrt((float)col);
						else
						re+=m*sqrt(2./col);
					}
					z=(float)(((float)u+1.0/2.0)*(float)i);
					q=(float)(M_PI/(float)row);	
					if(i==0)
					out[x]+=(re*(cos(z*q)))/sqrt((float)row);
					else
					out[x]+=(re*(cos(z*q))*sqrt(2./row));
				}
			}
		}
	}					
}
