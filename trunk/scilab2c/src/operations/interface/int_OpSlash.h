/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 * 
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at    
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

/* THIS IS AN AUTOMATICALLY GENERATED FILE : DO NOT EDIT BY HAND. */

#ifndef __INT_OPSLASH_H__
#define __INT_OPSLASH_H__

/* Scalar / Scalar */

#define s0s0OpSlashs0(in1,in2)				srdivs(in1,in2)

#define d0d0OpSlashd0(in1,in2)				drdivs(in1,in2)
	
#define c0c0OpSlashc0(in1,in2)				crdivs(in1,in2)

#define z0z0OpSlashz0(in1,in2)				zrdivs(in1,in2)

#define s0c0OpSlashc0(in1,in2)				crdivs(FloatComplex(in1,0),in2)

#define c0s0OpSlashc0(in1,in2)				crdivs(in1,FloatComplex(in2,0))

#define d0z0OpSlashz0(in1,in2)				zrdivs(DoubleComplex(in1,0),in2)

#define z0d0OpSlashz0(in1,in2)				zrdivs(in1,DoubleComplex(in2,0))


/* Scalar / Matrix */

/* On transforme s0 en s2 pour appeler s2s2OpDotSlashs2*/
#define s0s2OpSlashs2(in1,in2,size,out)			{float* temp;\
									sfilla((float*)temp,size[0],size[1],in1);\
									s2s2OpDotSlashs2((float*)temp,size,in2,size,out);\
									}

/* On transforme d0 en d2 */
#define d0d2OpSlashd2(in1,in2,size,out)			{double* temp;\
									dfilla((double*)temp,size[0],size[1],in1);\
									d2d2OpDotSlashd2((double*)temp,size,in2,size,out);\
									}
									
/* On transforme c0 en c2 */									
#define c0c2OpSlashc2(in1,in2,size,out)			{floatComplex* temp;\
									cfilla((floatComplex*)temp,size[0],size[1],in1);\
									c2c2OpDotSlashc2((floatComplex*)temp,size,in2,size,out);\
									}
									
/* On transforme z0 en z2 */
#define z0z2OpSlashz2(in1,in2,size,out)			{doubleComplex* temp;\
									zfilla((doubleComplex*)temp,size[0],size[1],in1);\
									z2z2OpDotSlashz2((doubleComplex*)temp,size,in2,size,out);\
									}

/* On transforme s0 en c0 pour appeler c0c2OpSlashc2 */
#define s0c2OpSlashc2(in1,in2,size,out)			c0c2OpSlashc2(FloatComplex(in1,0),in2,size,out)

/* On transforme d0 en z0 */
#define d0z2OpSlashz2(in1,in2,size,out)			z0z2OpSlashz2(DoubleComplex(in1,0),in2,size,out)

/* On transforme s2 en c2 */
#define c0s2OpSlashc2(in1,in2,size,out)			{sfilla((float*)out,size[0],size[1],0);\
									c0c2OpSlashc2(in1,FloatComplexMatrix(in2,(float*)out,size[0]*size[1]),size,out);\
									}

/* On transforme d2 en z2 */
#define z0d2OpSlashz2(in1,in2,size,out)			{dfilla((double*)out,size[0],size[1],0);\
									z0z2OpSlashz2(in1,DoubleComplexMatrix(in2,(double*)out,size[0]*size[1]),size,out);\
									}


/* Matrix / Scalar */

/* On transforme s0 en s2 pour appeler s2s2OpDotSlashs2*/
#define s2s0OpSlashs2(in1,size,in2,out)			{float* temp;\
									sfilla((float*)temp,size[0],size[1],in2);\
									s2s2OpDotSlashs2(in1,size,(float*)temp,size,out);\
									}

/* On transforme d0 en d2 */
#define d2d0OpSlashd2(in1,size,in2,out)			{double* temp;\
									dfilla((double*)temp,size[0],size[1],in2);\
									d2d2OpDotSlashd2(in1,size,(double*)temp,size,out);\
									}
									
/* On transforme c0 en c2 */
#define c2c0OpSlashc2(in1,size,in2,out)			{floatComplex* temp;\
									cfilla((floatComplex*)temp,size[0],size[1],in2);\
									c2c2OpDotSlashc2(in1,size,(floatComplex*)temp,size,out);\
									}

/* On transforme z0 en z2 */
#define z2z0OpSlashz2(in1,size,in2,out)			{doubleComplex* temp;\
									zfilla((doubleComplex*)temp,size[0],size[1],in2);\
									z2z2OpDotSlashz2(in1,size,(doubleComplex*)temp,size,out);\
									}

/* On transforme s2 en c2 pour appeler c2c0OpSlashc2 */
#define s2c0OpSlashc2(in1,size,in2,out)			{sfilla((float*)out,size[0],size[1],0);\
									c2c0OpSlashc2(FloatComplexMatrix(in1,(float*)out,size[0]*size[1]),size,in2,out);\
									}
			
/* On transforme d2 en z2 */
#define d2z0OpSlashz2(in1,size,in2,out)			{dfilla((double*)out,size[0],size[1],0);\
									z0z2OpSlashz2(DoubleComplexMatrix(in1,(double*)out,size[0]*size[1]),size,in2,out);\
									}

		
/* On transforme s0 en c0 */
#define c2s0OpSlashc2(in1,size,in2,out)			c2c0OpSlashc2(in1,size,FloatComplex(in2,0),out)
			
/* On transforme d0 en z0 */
#define z2d0OpSlashz2(in1,size,in2,out)			z2z0OpSlashz2(in1,size,DoubleComplex(in2,0),out)
			




/* Matrix / Matrix */

#define s2s2OpSlashs2(in1,size1,in2,size2,out)		srdivma(in1,size1[0],size1[1],in2,size2[0],size2[1],out)

#define d2d2OpSlashd2(in1,size1,in2,size2,out)		drdivma(in1,size1[0],size1[1],in2,size2[0],size2[1],out)

#define c2c2OpSlashc2(in1,size1,in2,size2,out)		crdivma(in1,size1[0],size1[1],in2,size2[0],size2[1],out)

#define c2s2OpSlashc2(in1,size1,in2,size2,out)		crdivma(in1,size1[0],size1[1],FloatComplexMatrix(in2,0,size2[0]*size2[1]),size2[0],size2[1],out)

#define s2c2OpSlashc2(in1,size1,in2,size2,out)		crdivma(FloatComplexMatrix(in1,0,size1[0]*size1[1]),size1[0],size1[1],in2,size2[0],size2[1],out)

#define z2z2OpSlashz2(in1,size1,in2,size2,out)		zrdivma(in1,size1[0],size1[1],in2,size2[0],size2[1],out)

#define z2d2OpSlashc2(in1,size1,in2,size2,out)		crdivma(in1,size1[0],size1[1],DoubleComplexMatrix(in2,0,size2[0]*size2[1]),size2[0],size2[1],out)

#define d2z2OpSlashc2(in1,size1,in2,size2,out)		crdivma(DoubleComplexMatrix(in1,0,size1[0]*size1[1]),size1[0],size1[1],in2,size2[0],size2[1],out)

#endif /* !__INT_OPSLASH_H__ */
