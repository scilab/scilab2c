/*
    Scilab2C FOSSEE IIT Bombay 
 */

#include "logspace.h"
#include<math.h>
void dlogspaces(double low_limit,double up_limit,double range_num,double *out)
{
   int j;
   double temp = pow(10,low_limit);
   double step_iterate = pow(10,((up_limit-low_limit)/(range_num-1)));
   out[0] = pow(10,low_limit);   //First value of output is equal to low_limit value
   for(j=1; j<(double)range_num; j++) 
   { 
     out[j] = temp*step_iterate;
     temp = out[j];
     if(j == (double)range_num-1 )
     {
         out[j] = pow(10,((double)up_limit));  // Last value of output is equal to up_limit value
     }
   }
   
         

}

