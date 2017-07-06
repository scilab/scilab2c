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
/* This is the "lcm" function, accepting two inputs which are the array of integers
    and second the size of the array. The algorithm works like this:
    We take a temproary variable and store the lcm of the first two elements of the
    array in it. Now using this temproary variable we recursively fin the lcm of
    the whole array.
    Now to fin the lcm of two elements we fin the maximum of the two elements and
    check whether it is divisible by both the elements, if the condition is true we
    get the lcm, else increase the maximum value by itself unless we get the lcm.
*/
#include "lcm.h"
uint8 u8lcma(uint8* in,int size)
{
    long long int lcm_temp;
    if(size==1)
    {
    lcm_temp=*in;
    }
    else
    {
    
    int x1=*in;
    int x2=*(in+1);
    long long int max=(x1>x2)?x1:x2;
    long long int i=max;
    while(1)
    {
        if(i%x1==0 && i%x2==0)
        {
        lcm_temp=i;
        break;
        }
        else
        i+=max;
    }
    int j;
    for(j=2;j<size;j++)
    {
    x1=lcm_temp;
    x2=*(in+j);
    max=(x1>x2)?x1:x2;
    i=max;
    while(1)
    {
        if(i%x1==0 && i%x2==0)
        {
        lcm_temp=i;
        break;
        }
        else
        i+=max;
    }
    }
    
    }
  return lcm_temp;
}

