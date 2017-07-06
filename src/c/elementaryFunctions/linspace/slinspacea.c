/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ukasha Noor
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
#include <stdlib.h>
#include "linspace.h"

void slinspacea(float *low_limit,int _row,float *up_limit,float range_num,float *out)
{
   int i,j,k;
   float temp;
   float *step_iterate;  /* for each row the spacing between two values is different.*/
   step_iterate = (float*) malloc((float)_row*sizeof(float));
   for(i=0;i<_row;i++)
   {
    
     step_iterate[i] = (up_limit[i]-low_limit[i])/(range_num-1);
     
   }
   for(j=0;j < _row;j++)
   {
     out[j] = low_limit[j];  /* For every row first element is the first value of low_limit array*/
     temp = low_limit[j];
     for(k=1;k < (float)range_num;k++ )
      {
          out[(_row*k)+j] = temp + step_iterate[j];  /* Output matrix positions for 3 X 5 matrix are [0 3 6 9 12;1 4 7 10 13;2 5 8 11 14] so (_row*k)+j) used*/
          temp = out[(_row*k)+j];
          if(k == (float)range_num-1 )
         {
            out[(_row*k)+j] = (float)up_limit[j];  /* Last value of output is equal to first value of up_limit array*/
         }  

      }
     
 
   }
   
   
     

}

