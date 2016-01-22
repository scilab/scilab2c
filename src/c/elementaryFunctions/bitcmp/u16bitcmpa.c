/* Scilab2C FOSSEE IITB */

#include "bitcmp.h"
void u16bitcmpa(uint16 *x,uint16 y,int size,uint16* out)
{
   int i=0;
   for(i=0;i<size;i++)
    {
       out[i] = u16bitcmps(x[i],y);
      
    }
   
  
}


