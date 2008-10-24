/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "max.h"
#include "min.h"
#include "fft_internal.h"


/*c'est moche je sais */

static double* a ;
static double* b ;
static int     ntot  ;
static int     n     ;
static int     nspan ;
static int     isn   ;
static int     m     ;
static int     kt    ;
static double*    wt    ;
static double*    ck    ;
static double*    bt    ;
static double*    sk    ;
static int*    np    ;
static int*    nfac  ;
static int     inc   ;
static int     nt    ;
static int     ks    ;

static double  rad   ;
static double  c72   ;
static double  s72   ;
static double  s120  ;

static double  aa ;
static double  ak ;
static double  akm ;
static double  akp ;
static double  aj ;
static double  ajp ;
static double  ajm ;

static double  bb ;
static double  bk ;
static double  bkm ;
static double  bkp ;
static double  bj ;
static double  bjp ;
static double  bjm ;
static double  dr ;

static double  cd ;
static double  c1 ;
static double  c2 ;
static double  c3 ;

static double  sd ;
static double  s1 ;
static double  s2 ;
static double  s3 ;

static int      kspan ;
static int     nn ;
static int     jc ;
static int     klim ;
static int     jf ;
static int     maxf ;
static int     kk ;
static int     k ;
static int     k1 ;
static int     k2 ;
static int     k3 ;
static int     k4 ;
static int     mm ;
static int     kspnn ;
static int      i ;
static int      j ;
static int      jj;





int dfftmx ( double* _pdblA , double* _pdblB , int _iNtot, int _iN, int _iNspan,
             int _iIsn, int _iM, int _iKt, double* _pdblWt, double* _pdblCk,
             double* _pdblBt, double* _pdblSk, int* _piNp, int* _piNfac)
{

   int retVal = 0 ;
   int iii = 0 ;
   a = _pdblA ;
   b = _pdblB ;

   ntot = _iNtot ;
   n    = _iN ;
   nspan= _iNspan ;
   isn  = _iIsn;
   m    = _iM ;
   kt   = _iKt ;
   wt   = _pdblWt ;
   ck   = _pdblCk;
   bt   = _pdblBt;
   sk   = _pdblSk;
   np   = _piNp;
   nfac = _piNfac;

   inc = abs ( isn ) ;
   nt = inc*ntot ;
   ks = inc*nspan;
   rad = atan ( 1 );
   printf ( "rad %f\n" , rad ) ;
   c72 = cos (rad/0.6250);
   s72 = sin (rad/0.6250);
   s120= sqrt(0.750);




        fprintf (stderr , "\n\n" );

    fprintf (stderr ,  "preliminary\n" );
   preliminaryWork () ;


   while ( retVal == 0 )
      {
        fprintf (stderr ,  "factortransform\n" );
        retVal = factorTransform ( ) ;
      }


   np[0] = ks ;

   if ( kt != 0)
    {
     fprintf (stderr ,  "permute stage 1\n" );
     permute_stage1 ( ) ;
    }

   if ( 2*kt + 1 < m )
    {
      fprintf (stderr ,  "permute stage 2\n" );
      permute_stage2 ( ) ;
    }


/*  lines under are just for my own conveniance   */
   for ( iii = 0 ; iii < 3 ; iii++)
    {

     fprintf (stderr , "\t\t out %d  tot : %f \t %f\n" , iii ,a[iii], b[iii]);

    }

   _pdblA = a ;
   _pdblB = b ;

   return 0 ;
}

/** **************************************
Sous-Fonctions
******************************************/




void preliminaryWork (void)
{

    int lim ;


   if ( isn <= 0 )
      {
       s72 = -s72 ;
       s120= -s120;
       rad = -rad ;
      }
   else
      {
       ak =(double) 1/n ;

       /*scale by 1/n for isn > 0 */
       for ( j = 1 ;  j <= nt ; j += inc )
          {
           a[j-1] *= ak ;
           b[j-1] *= ak ;
              printf ("boucle isn\n ak %f" , ak);
          }
      }
   kspan = ks ;
   nn = nt -inc ;
   jc = ks/n ;

   /* sin , cos values are re-initialized each lim steps */

   lim = 32 ;
   klim = lim*jc ;
   i = 0;
   jf = 0 ;

   maxf = m -kt ;
   maxf = nfac[maxf-1] ;

   fprintf (stderr , "\tm - kt %d , nfac %d kt %d\n" , m - kt , maxf , kt);

   if ( kt > 0 )
      maxf = max ( nfac[kt-1] , maxf );


}


/*40*/
int  factorTransform (void)
{

   int retVal = 42;
   int jjjj = 0 ;


   dr = 8 * (double)jc/(double)kspan ;
   printf ( "dr %f = jc %d kspan %d \n" ,dr, jc , kspan );
   cd = 2 * sin(0.5*dr*rad)*sin(0.5*dr*rad);
   sd = sin(dr*rad) ;
   printf ("debut cd %f sd %f dr %f\n\n" , cd , sd, dr) ;
   kk = 1 ;
   i++ ;

   for ( jjjj = 0 ; jjjj <  10 ; jjjj ++ )
     {
      printf ( " \t%d  a %f  b %f \n" ,jjjj, a[jjjj] , b[jjjj] );
     }


   fprintf (stderr ,  "avant switch  i %d ,nfac[i-1] %d\n" , i , nfac[i-1]);
switch ( nfac[i-1] )
   {
      case 2 :
         /*transform for factor of 2 (including rotation factor)*/
         fprintf (stderr ,  "\tpre_fOf2Trans\n" );
         retVal = pre_fOf2Trans( ) ;
         if ( retVal == 0 )
            {
            fprintf (stderr ,  "\tfactorOf2Transform\n" );
            factorOf2Transform ( ) ;

            }
         break ;

      case 4 :
         /*transform for factor of 4 */
         kspnn = kspan ;
         kspan = kspan >> 2 ; /*kspan /= 4 */

         fprintf (stderr ,  "\tfactorOf4Transform\n" );
         retVal = factorOf4Transform ( ) ;
         break ;

      case 3 :
         fprintf (stderr ,  "\tfactorOf3Transform\n" );
         k = nfac[i-1] ;
         kspnn = kspan ;
         kspan = kspan / k ;
         fprintf (stderr , "\t\t k %d i %d\n" , k ,i);

         factorOf3Transform ( ) ;
            for ( jjjj = 0 ; jjjj <  9 ; jjjj ++ )
             {
              printf ( " \t apres  transf%d  a %f  b %f \n" ,jjjj, a[jjjj] , b[jjjj] );
             }
         break ;

      case 5 :
         fprintf (stderr ,  "\tfactorOf5Transform\n" );
         k = nfac[i-1] ;
         kspnn = kspan ;
         kspan = kspan / k ;
         fprintf (stderr , "\t\t k %d\n" , k);
         factorOf5Transform ( ) ;
         break ;

      default :

         k = nfac[i-1] ;
         kspnn = kspan ;
         kspan = kspan / k ;
         fprintf (stderr , "\t\t k %d kspan %d \n" , k , kspan);
         fprintf (stderr , "\t\t nfac[i-1] %d jf %d\n" , nfac[i-1] , jf ) ;
         if ( nfac[i-1] != jf)
            {
             fprintf (stderr ,  "\tpreFOtherTransform \n" );
             preFOtherTransform ( ) ;
            }
         fprintf (stderr ,  "\tfactorOfOtherTransform \n" );
         factorOfOtherTransform ( ) ;
         break ;
    }

    printf ("\n\n");
   for ( jjjj = 0 ; jjjj <  15; jjjj ++ )
     {
      printf ( " \t%d  a %f  b %f \n" ,jjjj, a[jjjj] , b[jjjj] );
     }

   if ( retVal == 42 )
    {

      fprintf (stderr ,  "\t\t i %d m %d\n" , i , m );
      if ( i !=  m)
        {
         fprintf (stderr ,  "\tmulByRotationFactor \n" );
         retVal = mulByRotationFactor ( ) ;
        }
      else
        retVal = 1 ;
    }


   if ( retVal == 1 )
      return 1 ; /*goto permute */
   else
      return 0 ; /*goto factor_transform => once again*/



}


void permute_stage1 (void)
{

 int retVal = 1 ;

   printf ("\t pre_sqFactor2NormlOrder\n");
   pre_sqFactor2NormlOrder ( ) ;

   if ( n == ntot )
      /*permutation for single-variate transform (optional code)*/
      while ( retVal == 1)
        {
         printf ("\tsingle_sqFactor2NormlOrder\n");
         single_sqFactor2NormlOrder ( ) ;
         retVal = post_sqFactor2NormlOrder () ;
        }
   else
      /*permutation for multivariate transform*/
      while ( retVal == 1)
        {
         printf ("\tmulti_sqFactor2NormlOrder\n");
         retVal = multi_sqFactor2NormlOrder ( );
        }


}

void permute_stage2 (void)
{


      kspnn = np[kt] ;
      fprintf (stderr ,  "\t kspnn %d , kt %d\n" , kspnn , kt);

      /*permutation for square-free facotrs of n */
      fprintf (stderr ,  "\tnonSqFactor2NormOrder 2\n" );
      nonSqFactor2NormOrder ( ) ;

      /*determine the permutation cycles of length greater than 1*/
      fprintf (stderr ,  "\tdetPermutCycles 2\n" );
      detPermutCycles ( );



       j = k3 + 1;
       nt -= kspnn ;
       i = nt - inc + 1 ;
       while ( nt >= 0 )
         {
            printf ( "\t\t  j %d , k3 %d\n" , j , k3 ) ;
            fprintf (stderr ,  "\treordermatrix \n" );

            reorderMatrix ( ) ;
            j = k3 + 1 ;
            nt -= kspnn ;
            i = nt - inc + 1 ;
            printf ( "\t\t570 nt %d k3 %d j %d\n" , nt, k3 , j) ;
         }


}

/** **************************************
Sous-Sous-Fonctions
******************************************/





int pre_fOf2Trans (void)
{
   int ktemp = 0 ;

   kspan /= 2;
   k1 = kspan + 2 ;
/*50*/
   do
     {
      fprintf (stderr , "\t 50 \n");
      k2 = kk + kspan ;
      ak = a[k2-1] ;
      bk = b[k2-1] ;

      a[k2-1] = a[kk-1] - ak;
      b[k2-1] = b[kk-1] - bk;

      a[kk-1] = a[kk-1] + ak;
      b[kk-1] = b[kk-1] + bk;

      kk = k2 + kspan ;
      ktemp = kk ;

      if ( kk > nn )
         {
           kk -= nn ;
         }
      }while (ktemp <= nn ||( kk <= jc && ktemp <= nn));


   printf ("\t kk %d > kspan %d ?\n" , kk, kspan );



   if ( kk > kspan )
      return 1 ; /*goto350*/
   else

      return 0 ;/*goto60*/




}



int factorOf2Transform (void)
{
int ktemp = 0 ;
printf ( "\t\t fact\n" ) ;




do /*60*/
  {
   c1 = 1 - cd ;
   s1 = sd ;
   mm = min( k1/2 , klim);

    do/* do 80 */
       {
        do
            {
              k2 = kk + kspan;
              printf ("\t\t 80 k2 %d kk %d\n" , k2 , kk);
              ak = a[kk-1] - a[k2-1];
              bk = b[kk-1] - b[k2-1];

              a[kk-1] = a[kk-1] + a[k2-1];
              b[kk-1] = b[kk-1] + b[k2-1];

              a[k2-1] = c1*ak - s1*bk;
              b[k2-1] = s1*ak + c1*bk;
              printf ("\t\t       k2 %d c1 %f s1 %f ak %f bk %f\n" , k2 , c1,s1,ak,bk);

              kk = k2 + kspan;
              ktemp = kk ;
              if (kk >= nt)
                {
                  k2 = kk - nt;
                  c1 = -c1;
                  kk = k1 - k2;
                  printf ("\t\t    k2 %d kk %d nt %d\n" , k2 , kk , nt);
                }

            }while (  ktemp < nt || (kk > k2 &&  ( ktemp >= nt))  );

        kk += jc;

        if ( kk <= mm ) /* 70 */
            {
             printf ( "\t 70 \n") ;
             ak =  c1 - ( cd*c1+sd*s1) ;
             s1 += (sd*c1-cd*s1) ;
                /*c the following three statements compensate for truncation
                c error.  if rounded arithmetic is used, substitute
                c c1=ak*/
             c1 = 0.5/(ak*ak+s1*s1) + 0.5 ;
             s1 *= c1 ;
             c1 *= ak ;
            }
        else
            {
             if ( kk < k2 ) /*90*/
                {
                 printf ( "\t 90 \n") ;
                 s1 = dr*rad*((double)(kk-1)/(double)jc);
                 c1 = cos(s1) ;
                 s1 = sin(s1) ;
                 mm = min(k1/2,mm+klim);
                }
            }
        printf ( "\tplop\n") ;
       }while ( kk <= mm || ( kk > mm && kk < k2 ));

   k1 += (inc+inc) ;
   kk = (k1-kspan)/2 + jc;

  } while ( kk <= jc*2 );

   printf ("goto40 1\n" ) ;
   return 0 ; /*goto40*/
}



int factorOf4Transform (void)
{

   int return_value = 0 ;

   /*120*/
   do
      {
         c1 = 1 ;
         s1 = 0 ;

         mm = min ( kspan , klim ) ;

         do
            {
            f4t_150 () ;
            return_value = f4t_170 () ;
            } while (  return_value == 0 );

         kk += ( inc - kspan ) ;
      } while ( kk <= jc ) ;



   if ( kspan == jc )
        return 1 ; /*goto350*/
   else
         return 0 ;/*goto40*/


}

void f4t_150 (void)
{

   int sign = 1 ;

   do{
      k1 = kk + kspan ;
      k2 = k1 + kspan ;
      k3 = k2 + kspan ;

      akp = a[kk-1] + a[k2-1] ;
      akm = a[kk-1] - a[k2-1] ;

      ajp = a[k1-1] + a[k3-1] ;
      ajm = a[k1-1] - a[k3-1] ;

      a[kk-1] = akp + ajp ;
      ajp = akp - ajp ;

      bkp = b[kk-1] + b[k2-1] ;
      bkm = b[kk-1] - b[k2-1] ;

      bjp = b[k1-1] + b[k3-1] ;
      bjm = b[k1-1] - b[k3-1] ;

      b[kk-1] = bkp + bjp ;
      bjp = bkp - bjp ;

      if ( isn <  0 )
         sign =  1 ;
      else
         sign = -1 ;


      akp = akm +(sign * bjm );
      akm = akm -(sign * bjm );

      bkp = bkm +(sign *  ajm) ;
      bkm = bkm -(sign *  ajm) ;

      if ( s1 == 0 )/*190*/
         {
         a[k1-1] = akp ;
         a[k2-1] = ajp ;
         a[k3-1] = akm ;

         b[k1-1] = bkp ;
         b[k2-1] = bjp ;
         b[k3-1] = bkm ;


         }
      else /*160*/
         {

         a[k1-1] = akp*c1 - bkp*s1 ;
         a[k2-1] = ajp*c2 - bjp*s2 ;
         a[k3-1] = akm*c3 - bkm*s3 ;

         a[k1-1] = bkp*c1 + akp*s1 ;
         a[k2-1] = bjp*c2 + ajp*s2 ;
         a[k3-1] = bkm*c3 + akm*s3 ;
         }
    }while  ( kk < nt ) ;


}

int  f4t_170 (void)
{

   kk += ( jc - nt ) ;

   if ( kk <= mm )
      {
       c2 = c1 - (cd*c1 + sd*s1);
       s1 = s1 + (sd*c1 - cd*s1);

      /*
      the following three statements compensate for truncation
      error.  if rounded arithmetic is used, substitute
      c1=c2
      */

      c1 = 0.5/(c2*c2+s1*s1) + 0.5 ;
      s1 *= c1 ;
      c2 *= c1 ;

      /*140*/

      c2 = c1*c1 - s1*s1 ;
      s2 = c1*s1*2 ;
      s3 = c2*s1 + s2*c1 ;


      return 0 ;

      }
   else
     {
      if ( kk <= kspan )
         {
          s1 = dr*rad * (kk-1)/jc ;
          c2 = cos (s1) ;
          s1 = sin (s1) ;
          mm = min ( kspan , mm  + klim );

         /*140*/

         c2 = c1*c1 - s1*s1 ;
         s2 = c1*s1*2 ;
         s3 = c2*s1 + s2*c1 ;

         return 0 ;
         }
      }

   return 1 ;
}




void factorOf3Transform (void)
{
int ktemp = 0 ;
do
   {
   fprintf (stderr ,  "\t\t une boucle dans factor of 3\n");
   k1 = kk + kspan ;
   k2 = k1 + kspan ;

   ak = a[kk-1] ;
   bk = b[kk-1] ;

   aj = a[k1-1] + a[k2-1] ;
   bj = b[k1-1] + b[k2-1] ;

   a[kk-1] = ak + aj ;
   b[kk-1] = bk + bj ;

   ak = -0.5*aj + ak ;
   bk = -0.5*bj + bk ;

   aj = (a[k1-1] - a[k2-1])*s120 ;
   bj = (b[k1-1] - b[k2-1])*s120 ;

   a[k1-1] = ak - bj ;
   b[k1-1] = bk + aj ;
   a[k2-1] = ak + bj ;
   b[k2-1] = bk - aj ;

   kk = k2 + kspan ;
   ktemp = kk ;

   fprintf (stderr ,  "\t\t kk %d , nn %d , kspan %d\n" , kk , nn , kspan );

   if ( kk >= nn )
      kk -= nn ;
   fprintf (stderr ,  "\t\t 2kk %d , nn %d , kspan %d\n" , kk , nn , kspan );
   }while (  ktemp < nn || (kk <= kspan &&  ( ktemp >= nn))  );

}

void factorOf5Transform (void)
{
    int ktemp ;

    c2 = c72*c72 - s72 *s72 ;
    s2 = 2 * c72*s72;
    fprintf (stderr ,  "plop\n" ) ;
   do
      {
      k1 = kk + kspan ;
      k2 = k1 + kspan ;
      k3 = k2 + kspan ;
      k4 = k3 + kspan ;

      fprintf (stderr ,  "kk %d \t k1 %d \t k2 %d \t k3 %d \t k4 %d\n", kk , k1 , k2 ,k3,k4 );

      akp = a[k1-1] + a[k4-1] ;
      akm = a[k1-1] - a[k4-1] ;

      bkp = b[k1-1] + b[k4-1] ;
      bkm = b[k1-1] - b[k4-1] ;

      ajp = a[k2-1] + a[k3-1] ;
      ajm = a[k2-1] - a[k3-1] ;

      bjp = b[k2-1] + b[k3-1] ;
      bjm = b[k2-1] - b[k3-1] ;

      aa = a[kk-1] ;
      bb = b[kk-1] ;

      a[kk-1] = aa + akp + ajp;
      b[kk-1] = bb + bkp + bjp;

      ak = akp*c72 + ajp*c2 + aa ;
      bk = bkp*c72 + bjp*c2 + bb ;

      aj = akm*s72 + ajm*s2 ;
      bj = bkm*s72 + bjm*s2 ;

      a[k1-1] = ak - bj ;
      a[k4-1] = ak + bj ;
      b[k1-1] = bk + aj ;
      b[k4-1] = bk - aj ;

      ak = akp*c2 + ajp*c72 + aa ;
      bk = bkp*c2 + bjp*c72 + bb ;

      aj = akm*s2 - ajm*s72 ;
      fprintf (stderr , "aj %f \takm %f \tajm %f\n" , aj , akm , ajm );
      bj = bkm*s2 - bjm*s72 ;

      a[k2-1] = ak - bj ;
      a[k3-1] = ak + bj ;
      b[k2-1] = bk + aj ;
      b[k3-1] = bk - aj ;

      kk = k4 + kspan;
      ktemp = kk ;
      fprintf (stderr ,  "ak %f \tbk %f\naj %f \tbj %f\n" , ak , bk , aj ,bj );
      fprintf (stderr ,  "kk %d \t nn %d \t kspan %d\n", kk , nn , kspan );
      if ( kk >= nn )
        kk -= nn ;

      fprintf (stderr ,  "kk %d \t nn %d \t kspan %d\n", kk , nn , kspan );
   }while (ktemp < nn || (  kk <= kspan && ktemp >= nn));

fprintf (stderr ,  "fin 5\n" );

}


void preFOtherTransform (void)
{


   jf = k ;
   s1 = (rad*8)/k ;
   c1 = cos (s1) ;
   s1 = sin (s1) ;
   ck[jf-1] = 1 ;
   sk[jf-1] = 0 ;
   j = 1 ;

   do
   {
      ck[j-1] = ck[k-1] * c1 +  sk[k-1]*s1 ;
      sk[j-1] = ck[k-1] * s1 -  sk[k-1]*c1 ;

      k -- ;

      ck[k-1] = ck[j-1] ;
      sk[k-1] = - sk[j-1] ;

      j++ ;
    fprintf (stderr ,  "je boucle\n" );
   }while ( j < k );

}

void factorOfOtherTransform (void)
{
int ktemp = 0 ;

do
   {
   k1 = kk ;
   k2 = kk + kspnn ;

   aa = a[kk-1] ;
   bb = b[kk-1] ;

   ak = aa ;
   bk = bb ;
   j = 1 ;
   k1 += kspan ;

   do
   {
      k2 -= kspan ;
      j++ ;

      wt[j-1] = a[k1-1] + a[k2-1] ;
      ak = wt[j-1] + ak ;

      bt[j-1] = b[k1-1] + b[k2-1] ;
      bk = bt[j-1] + bk ;
      printf ("\t 260 ak %f  bk %f\n" , ak , bk ) ;
      j++ ;

      wt[j-1] = a[k1-1] - a[k2-1] ;
      bt[j-1] = b[k1-1] - b[k2-1] ;

      k1 += kspan;
   }while ( k1 < k2 ) ;

   a[kk-1] = ak ;
   b[kk-1] = bk ;

   k1 = kk ;
   k2 = kk + kspnn ;
   j = 1 ;

   do
      {
      k1 += kspan ;
      k2 -= kspan ;
      jj = j  ;
      ak = aa ;
      bk  = bb ;
      aj = 0 ;
      bj = 0 ;
      k  = 1 ;

      do
         {
         k++ ;
         ak += ( wt[k-1] * ck[jj-1] ) ;
         bk += ( bt[k-1] * ck[jj-1] ) ;
         printf ("\t 280 ak %f  bk %f\n" , ak , bk ) ;

         k++ ;
         aj += (wt[k-1] * sk[jj-1]) ;
         bj += (bt[k-1] * sk[jj-1]) ;
         printf ("\t     aj %f  bj %f\n" , aj , bj ) ;
         jj += j ;

         if ( jj > jf )
            jj -= jf ;
         } while ( k < jf ) ;

      k = jf - j ;
      a[k1-1] = ak - bj ;
      b[k1-1] = bk + aj ;
      a[k2-1] = ak + bj ;
      b[k2-1] = bk - aj ;

      j++ ;
          fprintf (stderr ,  "je boucle3\n" );
      }while ( j < k ) ;





   kk += kspnn ;
   ktemp = kk ;
      fprintf (stderr ,  "kk %d \t nn %d \t kspan %d\n", kk , nn , kspan );
   if ( kk > nn )
      {
         kk -= nn;
      }
      fprintf (stderr ,  "kk %d \t nn %d \t kspan %d\n", kk , nn , kspan );
}while (  ktemp <= nn || (kk <= kspan &&  ( ktemp > nn))  );
}




int mulByRotationFactor (void )
{
 int ktemp = 0 ;

   if ( i != m )
      {
       kk = jc + 1 ;

       /*300*/
       do
         {
         c2 = 1 - cd ;
         s1 = sd ;
         printf ( "\t 300 c2 %f s1 %f \n" , c2 , s1 );
         mm = min ( kspan , klim ) ;

         /*320 */
         do
           {
            printf ( "\t 320 \n" ) ;
            c1 = c2 ;
            s2 = s1 ;
            kk += kspan ;
            printf ( "\t 320 c2 %f s1 %f \n" , c2 , s1 );
            do
              {
                printf ( "\t 330 kk  %d s2 %f c2 %f\n" , kk , s2 , c2  ) ;
                ak = a[kk-1] ;
                a[kk-1] = c2*ak - s2*b[kk-1] ;
                b[kk-1] = s2*ak + c2*b[kk-1] ;

                kk += kspnn ;
                ktemp = kk ;

                printf ("\t\t kk %d nt %d  \n" , kk , nt );
                if ( kk > nt )
                  {
                   ak = s1*s2 ;
                   s2 = s1*c2 + s2*c1 ;
                   c2 = c1*c2 - ak ;
                   kk += (kspan - nt ) ;
                   printf ( "\t\t plop  c2 %f s2 %f \n" , c2 , s2 );

                   printf ("\t\t kk %d kspnn %d  \n" , kk , kspnn );
                  }

               }while (ktemp <= nt || ( kk <= kspnn && ktemp > nt  )) ;

            kk += ( jc - kspnn );

            printf ( "\t avant goto310/340 , kk %d , mm %d , kspan %d \n" , kk , mm , kspan ) ;
            if ( kk <= mm )
               {
                printf ( "\t 310 \n" ) ;
               /* 310*/
                c2 = c1 - ( cd*c1 + sd*s1 ) ;
                s1 += (sd*c1 - cd*s1 ) ;

               /*
               the following three statements compensate for truncation
               error.  if rounded arithmetic is used, substitute
               c1=c2
               */

                c1 = 0.5/(c2*c2+s1*s1) + 0.5 ;
                s1 *= c1 ;
                c2 *= c1 ;
               }
            else
               {
                  if ( kk <= kspan )
                     {
                      printf ( "\t 340 \n" ) ;
                      s1 = dr*rad * (kk-1)/jc ;
                      c2 = cos (s1) ;
                      s1 = sin (s1) ;
                      mm = min ( kspan , mm  + klim );
                     }
               }

            }while ( kk <= mm  ||( kk <= kspan && kk > mm ) ) ;

          kk += (jc + inc -kspan );

          printf ( "je boucle 2 \n" ) ;
         }while ( kk <= jc+jc);

       printf ("\tje prends le goto40\n" ) ;
       return 0 ; /* goto40 */
      }

   return 1 ; /* goto350*/
}




void pre_sqFactor2NormlOrder (void)
{

   k = kt + kt + 1 ;

   if ( m < k )
      k -- ;

   j = 1 ;
   np[k] = jc ;

   do
      {
        np[j] = np[j-1]/nfac[j-1] ;
        np[k-1] = np[k]*nfac[j-1] ;

        j++ ;
        k-- ;
      }while ( j <  k ) ;

   k3 = np[k] ;
   kspan = np[1] ;
   kk = jc + 1 ;
   k2 = kspan + 1 ;
   j = 1;


}

int  post_sqFactor2NormlOrder (void)
{
   printf ("\tpost_sqFactor2NormlOrder\n");
    do
     {
      do
        {
          k2 -= np[j-1] ;
          j++ ;
          k2 += np[j]  ;
          printf ("\t\t380-k2 %d np[%d] = %d\n" , k2 , j-1 , np[j-1]);
         } while ( k2 >  np[j-1]);

       j = 1 ;

/* 390 */
       do
         {
          if ( kk < k2 )
            {

             printf ( "\t\t  return 1\n");
             return 1 ;
            }
          else
            {
               kk += inc ;
               k2 += kspan ;
            }
         }while( k2 < ks  );

      }while ( kk < ks ) ;

   jc = k3 ;
   printf ( "\t\t  return 0\n");
   return 0;
}


/* appeler cetter fonction dans un do while valeur_retour != 1)*/
void  single_sqFactor2NormlOrder (void)
{


      do
        {
         printf ("\t\t 370 - kk %d ks %d k2 %d\n", kk , ks , k2 ) ;
         ak = a[kk-1] ;
         a[kk-1] = a[k2-1] ;
         a[k2-1] = ak ;

         bk = b[kk-1] ;
         b[kk-1] = b[k2-1] ;
         b[k2-1] = bk ;

         kk += inc ;
         k2 += kspan ;
        } while ( k2 < ks );

      /*380*/
}

/*idem que single_ */
int multi_sqFactor2NormlOrder (void)
{



      k = kk + jc ;

      do /*410*/
        {
         ak = a[kk-1] ;
         a[kk-1] = a[k2-1] ;
         a[k2-1] = ak ;
         bk = b[kk-1] ;
         b[kk-1] = b[k2-1] ;
         b[k2-1] = bk ;
         kk += inc ;
         k2 += kspan ;
        } while ( kk < k );

      kk += (ks - jc ) ;
      k2 += (ks - jc ) ;

      if ( kk < nt )
         return 1 ;

      k2 += (  kspan - nt );
      kk += (  jc    - nt );

      if ( k2 < ks )
         {

         return 1 ;
         }
      if( post_sqFactor2NormlOrder ( ) == 1 )
         {

         return 1 ;
         }
   jc = k3 ;

   return 0;

}



void nonSqFactor2NormOrder (void)
{

   j = m - kt ;
   nfac[j] = 1 ;



    do
      {
         nfac[j-1] *= nfac[j] ;
         fprintf (stderr ,  "\t\t m %d j %d , nfac[j-1] %d\n", m , j , nfac[j-1] );
         j-- ;


      }while ( j != kt ) ;

   kt ++ ;
   nn = nfac[kt-1] - 1;
   fprintf (stderr ,  "\t\t nn %d \n" , nn ) ;
   jj = 0 ;
   j = 0;

   /*480*/

   k2 = nfac[kt-1] ;
   k = kt + 1 ;
   kk = nfac[k-1] ;
   j ++ ;
   fprintf (stderr ,  "\t\tj %d\n" , j ) ;
   while ( j <= nn )
         {
            jj += kk ;
            fprintf (stderr , "\t\t 1jj %d , kk %d\n" , jj , kk ) ;

            while ( jj >=  k2 )
               {
                jj -= k2 ;
                k2 = kk ;
                k++ ;
                kk = nfac[k-1] ;

                jj += kk ;
                fprintf (stderr , "\t\t jj %d , kk %d\n" , jj , kk ) ;

               }

            np[j-1] = jj ;
            k2 = nfac[kt-1] ;
            k = kt + 1 ;
            kk = nfac[k-1] ;
            j ++ ;
            fprintf (stderr ,  "\t\t1j %d\n" , j ) ;
         }

   j = 0 ;

   return ;
}


void detPermutCycles (void)
{

  do
   {
    do
      {
       j++ ;
       fprintf (stderr , "\t\t500 j %d \tnp[j-1] %d\n" , j , np[j-1]);
       kk = np[j-1] ;
      }while ( kk < 0 ) ;

    fprintf (stderr , "\t\t kk %d\t j %d\t\n" , kk , j );
    if ( kk != j )
      {
         do
            {
               fprintf (stderr , "\t\t 490 kk %d\n" , kk );
               k = kk ;
               kk = np[k-1] ;
               np[k-1] = -kk ;
            }while ( kk != j ) ;
         k3 = kk ;
      }
    else
       np[j-1] = -j ;
   }while ( j != nn );

   maxf *= inc ;

   return ;
}

void  reorderMatrix (void)
{
do
  {
   do
      {
       j--  ;
       printf ( "\t\t\t j %d , %d \n" , j , np[j-1]);
      }while (np[j-1] < 0 ) ;

   jj = jc ;

   /*520*/
   do
      {
         kspan = jj ;

         if ( jj > maxf )
            kspan = maxf ;

         jj -= kspan ;
         k  = np [j-1];
         kk = jc*k + i + jj ;
         k1 = kk + kspan ;
         k2 = 0 ;

         do /*530*/
            {
               k2 ++ ;
               wt[k2-1] = a[k1-1] ;
               bt[k2-1] = b[k1-1] ;
               k1 -= inc ;

            }while ( k1 != kk );

         do
            {
            k1 = kk + kspan ;
            k2 = k1 - jc * (k + np[k-1]);
            k = -np[k-1];

            fprintf (stderr ,  "\t\ttend ploplpop 3\n" );
            do
               {
                  a[k1-1] = a[k2-1] ;
                  b[k1-1] = b[k2-1] ;

                  k1 -= inc ;
                  k2 -= inc ;

                  }while ( k1 != kk ) ;

            kk = k2 ;
            printf ( "\t\t k %d j %d\n" , k , j ) ;
            }while ( k != j );

            k1 = kk +kspan ;
            k2 = 0 ;
         /*560*/

         do
            {
            k2 ++ ;
            a[k1-1] = wt[k2-1] ;
            b[k1-1] = bt[k2-1] ;
            k1 -= inc ;
             fprintf (stderr ,  "\t\t560 k1 %d kk %d\n" , k1 , kk );

            }while (  k1 != kk ) ;

   } while ( jj != 0 ) ;
}while ( j != 1 ) ;

   return ;
}


