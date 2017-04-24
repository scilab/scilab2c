/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Shamik Guha
 Email: toolbox@scilab.in
*/
#include <string.h>
#include <math.h>
#include "dec2hex.h"
#include <stdio.h>

void i8dec2hexs(int8 in,char* out)
{
    int quot;
    int i=0,j=0,k=0,tmp,temp;
    quot=(int)in;
    while(quot!=0)
    {
         temp=quot%16;
      //To convert integer into character
      if(temp < 10)
           temp = temp + 48;
      else
         temp = temp + 55;

      out[i++]=temp;
      quot = quot/16;
	//printf("%c ",out[i-1]);
    }
	out[i]='\0';
	j=i-1;
	i=0;
	
	while(i<j)
	{
		tmp=out[i];
		out[i]=out[j];
		out[j]=tmp;
		i++;
		j--;
	}
	out[i+1]='  ';

    
}
