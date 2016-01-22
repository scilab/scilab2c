/* Scilab2C FOSSEE IITB */
#include "bitor.h"

void u8bitora(uint8* x,uint8* y,int size,uint8* out)
{
  int i = 0;
   for(i=0;i<size;i++)
     {
        out[i] = u8bitors(x[i],y[i]);
     }


}

