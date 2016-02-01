/* Scilab2C FOSSEE IITB */
#include "bitxor.h"

void u8bitxora(uint8* x,uint8* y,int size,uint8* out)
{
  int i = 0;
   for(i=0;i<size;i++)
     {
        out[i] = u8bitxors(x[i],y[i]);
     }


}

