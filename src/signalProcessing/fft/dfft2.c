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

#include "fft_internal.h"
#include <stdlib.h>

void dfft2 ( double* a , double* b , int nseg , int n , int nspn , int isn , int ierr, double* iw , int lw )
{

  /*created to avoid the cast problem */
   int* iIw = (int*) malloc( sizeof (int) * (unsigned int) lw );


/*so these lines are duplicated */
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

   dfftbi ( a , b , nseg , n , nspn , isn , ierr ,iIw[0], iIw[1], iIw[2], iIw[3], iIw[4], iw, iIw);



   return ;
}
