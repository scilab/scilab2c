#include <string.h>
#include <math.h>
#include "dec2base.h"
#include <stdio.h>

void sdec2bases(float in,int base,int n,char* out)
{
    int quot;
    int i=0,j=0,k=0,tmp,temp;
    quot=(int)in;
    while(quot!=0)
    {
         temp=quot%base;
      if(temp < 10)
           temp = temp + 48;
      else
         temp = temp + 55;
      out[i++]=temp;
      quot = quot/base;
    }
	out[i]='\0';
	j=i-1;
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
