/* Scilab2C FOSSEE IIT BOMBAY */
#include "rand.h"
#include<stdio.h>
void u8randa(double *out,int size)
{
  
  int i = 0;
   
  for(i = 0 ; i < size ; ++i)
    {
       out[i] = u8rands();
      
    }

}
