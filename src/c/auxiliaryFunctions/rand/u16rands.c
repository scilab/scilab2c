/* Scilab2C FOSSEE IIT Bombay */
#include "rand.h"
#include <stdio.h>

double u16rands(void)  
{

int m=1;
const int itwo=2;
static int m2=0,halfm=0,ia=0,ic=0,mic=0,iy=0;
static double s=0;
if(m2==0)
{
  /*if first entry,compute machine integer word length*/
  while(m>m2)
   {
      m2=m;
      m=itwo*m2;
   }
   halfm = m2;
   /* compute multiplier and increment for linear congruential methos */
   ia = 8*(int)(halfm*atan(1.0)/8.0) + 5;
   ic = 2*(int)(halfm*(0.5-sqrt(3.0)/6.0)) +1;
   mic = (m2 - ic) + m2;
  /* s is the scale factor for converting to floating point*/
  s = 0.5/halfm;

}

/* compute next random number */
 iy = iy*ia;
/* the following statement is for computers which do not allow interger overflow on addition*/
if(iy > mic) iy = (iy - m2) - m2;
 iy = iy + ic;

 /* the following statement is for computers where the word length for addition is greater than for multiplication */
 if(iy/2 > m2) iy = (iy - m2) - m2;
 /* the following statement is for computers where integer overflow affects the sign bit */
 if(iy < 0) iy = (iy + m2) + m2;
 return (double)iy*s;



}


