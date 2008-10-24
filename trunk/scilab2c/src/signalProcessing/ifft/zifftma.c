/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008 - INRIA - Allan SIMON
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
#define FFT842 1
#define DFFT2  0

#include "ifft.h"
#include <stdio.h>

void zifftma ( doubleComplex* in , int rows, int cols, doubleComplex* out)
{

int choosenAlgo = DFFT2 ;

int size = rows*cols ;
int sizeTemp = 0;
/*
int sizeWorkSpace = size *2;
*/
int rowsTemp = 0 ;
int colsTemp = 0 ;

int ierr = 0 ;
int isn = 1;
int i = 0;


double* realIn = (double*) malloc ( sizeof (double) * (unsigned int) size );
double* imagIn = (double*) malloc ( sizeof (double) * (unsigned int) size );


doubleComplex* inTemp = (doubleComplex*) malloc ( sizeof (doubleComplex) * (unsigned int) size );

/*
double* workSpace = (double*) malloc ( sizeof (double) * (unsigned int) sizeWorkSpace );
*/


zimaga ( in , size , imagIn) ;
zreala ( in , size , realIn) ;

if ( rows  ==  1 || cols == 1 )
{
  printf ( "it'a vector \n" ) ;

  sizeTemp = (int) pow ( 2 , (int ) (log( size + 0.5 ) /log ( 2 ))) ;
   printf ("pow  %e , temp %d \n" ,  pow ( 2 , (int )(log( size +0.5 ) /log ( 2 ))), sizeTemp);

   if ( size == sizeTemp )
      {
         if ( size <=  pow ( 2 , 15 ))
            {
             printf ( "we call fft842 \n" ) ;
             fft842 ( in , size  , 1 );
             choosenAlgo = FFT842 ;
            }
         else
            {
             printf ( "we call dfft2 \n" ) ;
             dfft2 ( realIn , imagIn , 1 , size , 1 , isn , ierr /*, workSpace , sizeWorkSpace*/ );
            }


       }
   else
      {
         printf ( "we call dfft2 2\n" ) ;
         dfft2 ( realIn , imagIn , 1 , size , 1 , isn , ierr /*, workSpace , sizeWorkSpace */);
      }

}

else
{
  printf ( "it'a matrix \n" ) ;
    rowsTemp = (int) pow ( 2 , log( rows + 0.5) /log ( 2 )) ;
    colsTemp = (int) pow ( 2 , log( cols + 0.5) /log ( 2 )) ;

    if ( cols == colsTemp)
      {
       if ( cols <=  pow ( 2 , 15 ))
         {
            for ( i = 0 ; i < rows ; i++ )
               {
                  fft842 ( &in[ cols*i] , cols , 1);
                  choosenAlgo = FFT842 ;
               }
         }
      else
         {
            dfft2 ( realIn, imagIn ,rows , cols , 1 , isn , ierr/* ,workSpace , sizeWorkSpace */);
         }
      }
    else
      {
         dfft2 ( realIn, imagIn ,rows , cols , 1 , isn , ierr/* ,workSpace , sizeWorkSpace*/ );
       }

    /*second call*/

   if ( 2*rows  <= 0 /* sizeWorkSpace*/ )
      {
         if ( rowsTemp == rows )
            {
               if ( rows <= pow ( 2 ,15) )
                  {
                   /*compute the fft on each line of the matrix */
                   for (i = 0 ; i < cols ; i++ )
                     {
                      C2F(zcopy) ( rows, in + i, cols, inTemp , 1 );

                      fft842( inTemp , rows , 1);
                      choosenAlgo = FFT842 ;
                      C2F(zcopy) ( rows, inTemp , cols, in + i, 1 );

                     }
                  }
               else
                  {
                   dfft2 ( realIn, imagIn, 1, rows, cols, isn, ierr/*, workSpace, sizeWorkSpace*/);
                  }
            }
         else
            {
             dfft2 ( realIn, imagIn, 1, rows, cols, isn, ierr/*, workSpace, sizeWorkSpace*/);
            }
      }
   else
      {
      dfft2 ( realIn, imagIn, 1, rows, cols, isn, ierr/*, workSpace, sizeWorkSpace*/);
      }
}



if ( choosenAlgo == FFT842 )
    {
     for ( i = 0 ; i < size ; i++)
        {
        out[i] = DoubleComplex ( zreals(in[i]) , zimags(in[i]) );
        }
    }
else
    {
     for ( i = 0 ; i < size ; i++)
        {
        out[i] = DoubleComplex ( realIn[i] , imagIn[i] );
        }

    }


}
