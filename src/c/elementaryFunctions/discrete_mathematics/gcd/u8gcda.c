/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
#include<stdio.h>
/* This is the "gcd" function , which takes two input. first
  one is the array and the second one is the length of the array.
  Now to calculate the gcd of two elements we fin the maximum of
  the two elements, and then iterate from maximum value down to 1,
  and check whether the particular value divides the two elements.
  And in this way we can calculate the gcd of the whole array.
*/
#include "gcd.h"
uint8 u8gcdua(uint8* in,int size)
{

  int temp;
  if(size==1)
  {
    temp=*in;
  }
  else
  {
  int x=*in;
  int y=*(in+1);
  int max=(x>y)?x:y;
  int i;
  for(i=max;i>=1;i--)
  {
    if(x%i==0 && y%i==0)
    {
      temp=i;
      break;
    }
  }
  int j;
  for(j=2;j<size;j++)
  {
    x=temp;
    y=*(in+j);
    max=(x>y)?x:y;
    for(i=max;i>=1;i--)
    {
      if(x%i==0 && y%i==0)
      {
        temp=i;
        break;
      }
    }
  }
}

  return temp;
}

