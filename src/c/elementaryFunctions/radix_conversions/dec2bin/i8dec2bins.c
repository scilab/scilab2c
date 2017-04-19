#include <string.h>
#include "dec2bin.h"
#include <stdio.h>
void i8dec2bins(int8 in,int n,int8* out)
{
	int quotient,i=0,j=0,tmp=0;
	quotient=(int)in;
	while(quotient!=0)
	{
		out[i++]= quotient%2;
        	quotient=quotient/2;
	}
	if(n>i-1)
	{
		for(j=i;j<=n;j++)
			out[j]=0.0;
	}
	if(n==0)
		j=i-1;
	else
		j=n-1;
		i=0;
	
	while(i<j)
	{
		tmp=out[i];
		out[i]=out[j];
		out[j]=tmp;
		i++;
		j--;
	}
}
