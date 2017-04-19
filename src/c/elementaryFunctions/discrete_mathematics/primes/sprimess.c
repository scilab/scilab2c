#include<stdio.h>
#include "primes.h"
void sprimess(float in, float* out)
{
     int i=0,j=0,k=0,n=0,counter=0;
     n=(int)in;
     for(i=2;i<=n;i++)
     {
             counter=0;
             for(j=2;j<i;j++)
             {
                     if(i%j==0)
                     {
                               counter=1;
                               break;
                     }
             }
             if(counter==0)
             {
                 out[k]=i;
		 k++;
             }
     }
}
