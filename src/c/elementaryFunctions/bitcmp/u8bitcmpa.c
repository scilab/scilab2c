/* Scilab2C FOSSEE IITB */

#include "bitcmp.h"
void u8bitcmpa(uint8 *x,uint8 y,int size,uint8* out)
{
   int i=0;
   for(i=0;i<size;i++)
    {
       out[i] = u8bitcmps(x[i],y);
      
    }
   
  
}


