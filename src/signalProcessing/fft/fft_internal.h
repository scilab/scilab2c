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

#ifndef __FFT_INTERNAL_H__
#define __FFT_INTERNAL_H__

#include "addition.h"
#include "subtraction.h"

#define FORWARD	0
#define INVERSE 1
void dfft2 ( double* a , double* b , int nseg , int n , int nspn ,
             int isn , int ierr);



void dfftbi ( double* a , double* b , int nseg , int n , int nspn ,
              int isn , int ierr );

void fft842 (doubleComplex* b, int size , int in);

void r2tx(int nthpo, doubleComplex* c0, doubleComplex* c1);
void r4tx( int nthpo, doubleComplex* c0, doubleComplex* c1, doubleComplex* c2, doubleComplex* c3);
void r8tx ( int nxtlt,int nthpo,int lengt,
            doubleComplex* cc0,doubleComplex* cc1,doubleComplex* cc2,doubleComplex* cc3,
            doubleComplex* cc4,doubleComplex* cc5,doubleComplex* cc6,doubleComplex* cc7);

int dfftmx ( double* _pdblA , double* _pdblB , int _iNtot, int _iN, int _iNspan,
             int _iIsn, int _iM, int _iKt, double* _pdblWt, double* _pdblCk,
             double* _pdblBt, double* _pdblSk, int* _piNp, int* _piNfac);

/* under functions used by dfftmx */
   void preliminaryWork (void);
   void preliminaryWork (void);
   void permute_stage1 (void);
   void permute_stage2 (void);
   void f4t_150 (void);
   void factorOf3Transform (void) ;
   void factorOf5Transform (void) ;
   void preFOtherTransform (void);
   void factorOfOtherTransform (void);
   void pre_sqFactor2NormlOrder (void);
   void nonSqFactor2NormOrder (void) ;
   void detPermutCycles (void);
   void reorderMatrix (void ) ;

   int f4t_170 (void);
   int factorTransform (void);
   int pre_fOf2Trans (void);
   int factorOf2Transform (void);
   int factorOf4Transform (void);
   int  mulByRotationFactor (void );
   int  post_sqFactor2NormlOrder (void);
   int  single_sqFactor2NormlOrder (void);
   int  preF2transform (void) ;
   int  multi_sqFactor2NormlOrder (void);
   int  end (void) ;

#endif /* !__FFT_INTERNAL_H__ */
