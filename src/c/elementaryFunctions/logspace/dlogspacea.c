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

#include "logspace.h"
#include<math.h>
void dlogspacea(double *low_limit,int _row,double *up_limit,double range_num,double *out)
{
   int i,j,k;
   double temp;
   double step_iterate[_row];  /* for each row the spacing between two values is different.*/
   for(i=0;i<_row;i++)
   {
     step_iterate[i] = pow(10,((up_limit[i]-low_limit[i])/(range_num-1)));
    
         
   }
   for(j=0;j < _row;j++)
   {
     out[j] = pow(10,low_limit[j]);  /* For every row first element is equal to 10 raise to  the first value of low_limit array*/
     temp = out[j];
     for(k=1;k < (double)range_num;k++ )
      {
          out[(_row*k)+j] = temp*step_iterate[j];  /* Output matrix positions for 3 X 5 matrix are [0 3 6 9 12;1 4 7 10 13;2 5 8 11 14] so (_row*k)+j) used*/
          temp = out[(_row*k)+j];
          if(k == (double)range_num-1 )
         {
            out[(_row*k)+j] = pow(10,((double)up_limit[j]));  /* For every row Last value of output is equal to 10 raise to first value of up_limit array*/
         }  

      }
     
 
   }
   
   
     

}

