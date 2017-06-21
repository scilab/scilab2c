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

#include "bitget.h"
#include<stdio.h>

uint16 u16bitgets(uint16 value,int position)
{
  
   value = value >> (position -1);
   value = value & 1;
   return value; 

   /*unsigned char mask = 1<<(position-1);
   uint16 bit = value&mask;
   if(bit > 0)
   {
       return 1;
   }
  else
   {
       return 0;
   }*/
  
}
