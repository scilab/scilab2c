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
#include "max.h"
#include "fft_internal.h"


/*
   iIw[0] = 0 ;
   iIw[1] = 10 ;
   iIw[2] = 10 ;
   iIw[3] = lw ;
   iIw[4] = 10 ;

   iw[0] = 0 ;
   iw[1] = 10 ;
   iw[2] = 10 ;
   iw[3] = lw ;
   iw[4] = 10 ;

   dfftbi ( a   , b     , nseg  , n      , nspn ,
            isn , ierr  , iIw[0], iIw[1] , iIw[2],
            iIw[3], iIw[4], iw, iIw );
 void dfftbi ( double* a , double* b , int nseg , int n , int nspn ,
              int isn , int ierr, int lout , int lnow ,
              int lused ,int lmax , int lbook , double* rstak , int* istakk )
*/

void dfftbi ( double* a , double* b , int nseg , int n    , int nspn  ,
              int isn   , int ierr)
{

    double* rstak ;
    int*  istak ;

   int lout = 0 ;
   int lnow = 10;
   int lused= 10;

   int lbook = 10 ;


   int nfac[15] ;
   int i ;
   int in ;
   int j = 3 ;
   int j2 = 3 ;
   int j3 = 3 ;
   int jj = 9;
   int m = 0 ;
   int k ;
   int kt ;
   int kkk ;
   int nspan ;
   int nitems ;
   int ntot ;
   int maxp  = 0;
   int maxf ;
   int itype;
   int istkgt ;
   int isize[] = {1,1,1,2,2} ;

   int nf = abs ( n ) ;

   ierr = 0 ;

   /*determine the factors of n */


   if ( nf == 1)
      return ;

   k = nf ;

   nspan = abs ( nf*nspn ) ;
   ntot  = abs ( nspan*nseg) ;


   if ( isn*ntot == 0 )
      {
      ierr = 1 ;
      return  ;
      }




   while ( (k- (int)(k/16)*16 ) == 0 )
      {
         m++;
         nfac[m-1] = 4 ;
         k = k >> 4 ;
      }




   do
      {
      while ( k%jj == 0 )
         {
            m++;
            nfac[m-1] = j ;
            k /= jj ;

         }

         j+=2;
         jj= j*j ;

      }while ( jj <= k);





  if ( k <= 4)
     {

      kt = m;
      nfac[m] = k;
      if ( k != 1 )
         m++;
      }
   else
     {
       if ( (k & 3) == 0 )
         {
            m++;
            nfac[m-1] = 2 ;
            k = k >> 2 ;
          }

       /*all square factor out now but k >= 5 still */
       kt = m ;
       maxp = max ( (kt+1)*2 , k-1);
       j=2;

      do
        {
         if ( k%j == 0 )
            {

               m++;
               nfac[m-1] = j ;
               k /= j ;
            }

          j = (j+1) | 1 ;

         }while ( j <= k );

      }



   if ( m <= ( kt+1) )
      maxp = m + kt + 1  ;



   if ( m + kt > 15)
    {
      ierr = 2 ;

      return ;
    }


   if ( kt != 0 )
      {
         j = kt ;

         do{
            m++;

            nfac[m-1] = nfac[j-1];
            j--;
           }while ( j != 0) ;
      }


    maxf = nfac[m-kt-1] ;

   if ( kt > 0 )
      maxf = max ( nfac[kt-1] , maxf );




   for ( kkk = 1 ; kkk <= m ; kkk++ )
      {
      maxf = max ( maxf , nfac[kkk-1]);

      }







 nitems = maxf * 4 ;
 itype = 4 ;


 istkgt = 2 + ((lnow-1)/2) ;/*lnow = 10*/
 istkgt = 6;

 /*i = ( (istkgt - 1 + nitems) * isize[3] -1) + 3 ;*/
 i = 12 + nitems*2;



   istak = (int*) malloc ( sizeof (int) * (unsigned int) i);

   istak[i-2] = itype ;
   istak[i-1] = lnow  ;
   lout ++ ;
   lnow = i ;
   lused = max ( lused , lnow );

   j = istkgt ;
   jj = j + maxf ;
   j2 = jj+ maxf ;
   j3 = j2+ maxf ;

   nitems = maxp ;
   itype  = 2 ;

  /*istkgt = ( lnow*isize[1] -1)/isize[1] + 2;*/
   istkgt =  lnow + 1 ;
   /*i = ( (istkgt - 1 + nitems) * isize[1] -1) / isize[1] + 3 ;*/
   i = ( ( lnow  + nitems) * isize[1] -1) / isize[1] + 3 ;
   istak = (int*) realloc ( istak ,sizeof (int) * (unsigned int) i);
   rstak = (double*) malloc ( sizeof (double) * (unsigned int) i);






   istak[i-2] = itype ;
   istak[i-1] = lnow  ;
   lout ++ ;
   lnow = i ;
   lused = max ( lused , lnow );

   k = istkgt ;

/*
c     la carte suivante est a supprimer si simple precision
c     next instruction commented by FD&MG (simulog residue?)
c    ********************************************
c      k=2*k-1
c    *********************************************
*/



   dfftmx( a , b , ntot , nf , nspan , isn , m , kt , &rstak[j-1] , &rstak[jj-1] , &rstak[j2-1] , &rstak[j3-1] , &istak[k-1] , nfac);

   k =2 ;

   in = 2 ;

   if (!( lbook <= lnow &&  lnow <= lused  ))
      {
         ierr = 3 ;
         return ;
      }

   while ( in > 0)
      {
         if ( lbook > istak[lnow-1] || istak[lnow-1] >=  lnow-1)
         {
            ierr = 4 ;
         }

         lout-- ;
         lnow = istak[lnow-1] ;
         in-- ;
      }
   return ;
}
