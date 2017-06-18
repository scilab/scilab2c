/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "bitset.h"
#include<stdio.h>

uint8 u8bitsets(uint8 value,int position,int bit_value)
{
     if(bit_value==1)       
     {
       unsigned char  mask1 = 1 << (position-1) ;  /* we could cast to unsigned char, just to be safe */
       return (mask1 | value);
     }
     else
     {
       unsigned char mask2 =  ~(1 << (position-1));  /* we could cast to unsigned char, just to be safe */
       return (mask2 & value);

     } 

}
