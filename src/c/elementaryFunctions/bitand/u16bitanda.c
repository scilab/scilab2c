/* Scilab2C FOSSEE IITB */
#include "bitand.h"

void u16bitanda(uint16* x,uint16* y,int size,uint16* out)
{
  int i = 0;
   for(i=0;i<size;i++)
     {
        out[i] = u16bitands(x[i],y[i]);
     }


}

