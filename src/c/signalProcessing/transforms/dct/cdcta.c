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


#include "dct.h"
#include "addition.h"
#include "types.h"
#include "floatComplex.h" 
#include "multiplication.h"
/*#include "matrixMultiplication"*/
/*#include <fftw3.h>*/
#include <math.h>

void cdcta(floatComplex *in,int row,int col,int sign,floatComplex *out)
{
	int i,j,k,u,v;
	int n;
	int x,y;
	float res,ress,vv,ff;
	float re,z,q,m;
	floatComplex accu = FloatComplex(0, 0);
	floatComplex temp,mm,aa,bb,cc;
	if(sign==-1)
	{
		if(row==1)
		{
			n=col;
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
							vv = cos(((M_PI)*(y+1-1./2.)*(x))/n);
							aa = FloatComplex(vv,0);		
							temp=cmuls(in[y],aa);
							out[x]=cadds(out[x],temp);
						}
					}
					if(x==0)
					{
						vv = 1./(sqrt(n));
						aa = FloatComplex(vv,0);
						out[x]=cmuls(out[x],aa);
					}
					else
					{
						float res=2./n;
						res = sqrt(res);
						aa = FloatComplex(res,0);
						out[x]=cmuls(out[x],aa);
					}
				}
			}
		}
		else
		{	
			n=col*row;
			for(u=0;u<row;u++)
			{
				for(v=0;v<col;v++)
				{
					x=v*row+u;
					out[x]=FloatComplex(0,0);
					for(i=0;i<row;i++)
					{
						temp=FloatComplex(0,0);
						mm=FloatComplex(0,0);
						for(j=0;j<col;j++)
						{
							y=j*row+i;
							z=(float)(((float)j+1.0/2.0)*(float)v);
							q=(float)(M_PI/(float)col);
							vv = cos(q*z);
							aa = FloatComplex(vv,0);
							mm=cmuls(in[y],aa);
							temp=cadds(temp,mm);
						}
						z=(float)(((float)i+1.0/2.0)*(float)u);
						q=(float)(M_PI/(float)row);
						ff = cos(q*z);
						bb = FloatComplex(ff,0);
						temp=cmuls(temp,bb);
						out[x]=cadds(out[x],temp);
						}
					if(u==0)
					{
						vv = 1./sqrt((float)row);
						aa = FloatComplex(vv,0);
						out[x]=cmuls(out[x],aa);
						if(v==0)
						{
							vv = 1./sqrt((float)col);
							aa = FloatComplex(vv,0);
							out[x]=cmuls(out[x],aa);
						}
						else
						{
							vv = sqrt(2./col);
							aa = FloatComplex(vv,0);
							out[x]=cmuls(out[x],aa);
						}
					}
					else
					{
						vv = sqrt(2./row);
						aa = FloatComplex(vv,0);
						out[x]=cmuls(out[x],aa);
						if(v==0)
						{
							vv = 1./sqrt((float)col);
							aa = FloatComplex(vv,0);
							out[x]=cmuls(out[x],aa);
						}
						else
						{
							vv = sqrt(2./col);
							aa = FloatComplex(vv,0);
							out[x]=cmuls(out[x],aa);
						}
					}
				}
			}
		}
	}
	else if(sign==1)
	{
		n=col;
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
								aa = FloatComplex(q,0);
								out[x]=cadds(out[x],cmuls(in[y],aa));
							}
							else
							{
								q=ress*(cos(((M_PI)*(j)*(v+1./2.))/n));
								aa = FloatComplex(q,0);
								out[x]=cadds(out[x],cmuls(in[y],aa));
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
							vv = cos(q*z);
							aa = FloatComplex(vv,0);		
							mm=cmuls(mm,aa);
							if(j==0)
							{
								vv = 1./sqrt((float)col);
								aa = FloatComplex(vv,0);
								temp=cadds(temp,cmuls(mm,aa));
							}		
							else
							{
								vv = sqrt(2./col);
								aa = FloatComplex(vv,0);
								temp=cadds(temp,cmuls(mm,aa));
							}
						}
						z=(float)(((float)u+1.0/2.0)*(float)i);
						q=(float)(M_PI/(float)row);	
						if(i==0)
						{	
							vv = (cos(z*q))*(1./sqrt(row));
							aa = FloatComplex(vv,0);
							out[x]=cadds(out[x],cmuls(temp,aa));
						}
						else
						{
							vv = (cos(z*q))*sqrt(2./row);
							aa = FloatComplex(vv,0);
							out[x]=cadds(out[x],cmuls(temp,aa));
						}
					}
				}
			}
		}					
	}
}
