/* Scilab2C FOSSEE IITB */

#include "bitset.h"
#include<stdio.h>

uint8 u8bitsets(uint8 value,int position,int bit_value)
{
     if(bit_value==1)       
     {
       unsigned char  mask1 = 1 << (position-1) ;  // we could cast to unsigned char, just to be safe
       return (mask1 | value);
     }
     else
     {
       unsigned char mask2 =  ~(1 << (position-1));  // we could cast to unsigned char, just to be safe
       return (mask2 & value);

     } 

}
