#include <string.h>
#include <math.h>
#include "dec2base.h"
#include <stdio.h>

void ddec2bases(double in,int base,int n,char* out)
{
    int quot;
	//printf("%d\n",n);
    int i=0,j=0,k=0,tmp,temp;
    quot=(int)in;
	//printf("%d",quot);
    while(quot!=0)
    {
         temp=quot%base;
	//printf("%d\n",temp);
      if(temp < 10)
      {     temp = temp + 48;
       	//printf("%d\n",temp);
      }
      else
      {
         temp = temp + 55;
	//printf("%d\n",temp);      
	}      
	out[i++]=temp;
	//printf("%c\n",out[i-1]);
      quot = quot/base;
    }
//printf("%d\n",i);
	if(n>i-1)
	{
		for(j=i;j<=n;j++)
		{	out[j]='0';
			//printf(" %c   %c \n",out[j],out[i]);
		}
	}
	if(n==0)
	{
	        j=i-1;
	        n=i;
	}
	else
		j=n-1;

	out[n]='\0';
	//for(k=0;k<=n;k++)
	//printf("%c\n",out[k]);
	i=0;
	while(i<j)
	{
		tmp=out[i];
		//printf("%c\n",out[i]);
		out[i]=out[j];
		out[j]=tmp;
		//printf("%c\n",out[j]);
		i++;
		j--;
	}
}
