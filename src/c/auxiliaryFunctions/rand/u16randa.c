/* Scilab2C FOSSEE IIT BOMBAY */
#include "rand.h"

void u16randa(double *out,int size)
{
  int i = 0;
  for(i = 0 ; i < size ; ++i)
    {
       out[i] = u16rands();
    }

}
