#include <string.h>
#include <math.h>
#include "dec2hex.h"
#include <stdio.h>

void u8dec2hexs(uint8 in,char* out)
{
    int quot;
    int i=0,j=0,k=0,tmp,temp;
    quot=(int)in;
    while(quot!=0)
    {
         temp=quot%16;
      //To convert integer into character
      if(temp < 10)
           temp = temp + 48;
      else
         temp = temp + 55;

      out[i++]=temp;
      quot = quot/16;
	//printf("%c ",out[i-1]);
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
	out[i+1]='  ';
    
}
