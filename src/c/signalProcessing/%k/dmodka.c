#include<stdio.h>
#include<math.h>
#include "modk.h"
double max_calc(double* ptr,int sz)
{
	int i=0;
	double mx;
	if(ptr[0]<0)
	{
	    ptr[0]=-1*ptr[0];
	}
	mx=(ptr[0]);
	//printf("%lf\n",mx);
	for(i=1;i<sz;i++)
	{
	if(ptr[i]<0)
	{
	    ptr[i]=-1*ptr[i];
	}
	if(mx<(ptr[i]))
	mx=(ptr[i]);
	}
    return mx;
}
void dmodka(double* inp,int size,double* oup)
{
	double ones[size],PI=M_PI;
	double eps=pow(2,-52);
	int i;
	for(i=0;i<size;i++)
	{
	ones[i]=1;
	}
	double a[size],b[size],c[size],an[size],bn[size],cn[size],kans[size];
	
	int j,kk,l,m;
	for(j=0;j<size;j++)
	{
	a[j]=1;
	}
	for(kk=0;kk<size;kk++)
	{
	b[kk]=sqrt(ones[kk]-inp[kk]);
	}
	for(l=0;l<size;l++)
	{
	c[l]=sqrt(inp[l]);
	
	}
	int x=0;
	//double maxi;
	//maxi=max_calc(c,size);
	//printf("%lf",maxi);
	
	while(max_calc(c,size)>eps)
	{
		int q,w,r;
		for(q=0;q<size;q++)
        	{
		an[q]=0.5*(a[q]+b[q]);
		}
		for(w=0;w<size;w++)
		{
		bn[w]=sqrt(a[w]*b[w]);
		}
		for(r=0;r<size;r++)
		{
		cn[r]=0.5*(a[r]-b[r]);
		}
		int x,y,z;
		for(x=0;x<size;x++)
		{
		a[x]=an[x];
		}
		for(y=0;y<size;y++)
		{
		b[y]=bn[y];
		}
		for(z=0;z<size;z++)
		{
		c[z]=cn[z];
		}
	}
	int q,w;
	for(q=0;q<size;q++)
	{
	oup[q]=PI*(ones[q]/(2*a[q]));
	}
	
}
/*
int main()
{
	double m[3]={0.1,0.2,0.3};
	dka(m,3);
}
*/
