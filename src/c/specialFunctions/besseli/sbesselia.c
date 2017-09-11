/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Brijesh Gupta C R
 Email: toolbox@scilab.in
*/
#include <stdio.h>
#include     "math.h"
#include     "besseli.h"

#define ACC 40.0
#define BIGNO 1.0e10
#define BIGNI 1.0e-10


float fonebessi( float inp1, float inp2)
{
   int j;
   float bi,bim,bip,tox,result,s,res,t;


   if (inp1 < 0)
   {
      float   dblank;
      return( dblank );
   }
   if (inp1 == 0)
      {
            if ((s=fabs(inp2)) < 3.75)
            {
                t=inp2/3.75,t=t*t;
                res=1.0+t*(3.5156229+t*(3.0899424+t*(1.2067492+t*(0.2659732+t*(0.360768e-1+t*0.45813e-2)))));
            }
            else
            {
                t=3.75/s;
                res=(exp(s)/sqrt(s))*(0.39894228+t*(0.1328592e-1+t*(0.225319e-2+t*(-0.157565e-2+t*(0.916281e-2+t*(-0.2057706e-1+t*(0.2635537e-1+t*(-0.1647633e-1+t*0.392377e-2))))))));
            }
            return res;
      }
   if (inp1 == 1)
   {
        if ((s=fabs(inp2)) < 3.75)
        {
            t=inp2/3.75,t=t*t;
            res=s*(0.5+t*(0.87890594+t*(0.51498869+t*(0.15084934+t*(0.2658733e-1+t*(0.301532e-2+t*0.32411e-3))))));
        }
        else
        {
            t=3.75/s;
            res=0.2282967e-1+t*(-0.2895312e-1+t*(0.1787654e-1-t*0.420059e-2));
            res=0.39894228+t*(-0.3988024e-1+t*(-0.362018e-2+t*(0.163801e-2+t*(-0.1031555e-1+t*res))));
            res *= (exp(s)/sqrt(s));
        }
        return inp2 < 0.0 ? -res : res;
   }


   if (inp2 == 0.0)
      return 0.0;
   else
   {
      tox=2.0/fabs(inp2);
      bip=result=0.0;
      bi=1.0;
      for (j=2*(inp1+(int) sqrt(ACC*inp1));j>0;j--)
      {
         bim=bip+j*tox*bi;
         bip=bi;
         bi=bim;
         if (fabs(bi) > BIGNO)
         {
            result *= BIGNI;
            bi *= BIGNI;
            bip *= BIGNI;
         }
         if (j == inp1) result=bip;
      }

      if ((s=fabs(inp2)) < 3.75)
      {
            t=inp2/3.75,t=t*t;
            res=1.0+t*(3.5156229+t*(3.0899424+t*(1.2067492+t*(0.2659732+t*(0.360768e-1+t*0.45813e-2)))));
      }
      else
      {
            t=3.75/s;
            res=(exp(s)/sqrt(s))*(0.39894228+t*(0.1328592e-1+t*(0.225319e-2+t*(-0.157565e-2+t*(0.916281e-2+t*(-0.2057706e-1+t*(0.2635537e-1+t*(-0.1647633e-1+t*0.392377e-2))))))));
      }

      result *= res/bi;
      return  inp2 < 0.0 && (int)inp1%2 == 1 ? -result : result;
   }
}

void sbesselia(float* inp1,int size1, float* inp2,int size2, float* oup)
{
    int i;
    if(size1 != size2)
        printf("Error! arguments #1 and #2 have incompatible dimensions.");
    for(i = 0; i<size1;i++)
    {
        oup[i] = fonebessi(inp1[i],inp2[i]);
    }
}

