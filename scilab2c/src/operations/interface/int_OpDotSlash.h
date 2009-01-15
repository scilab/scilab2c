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

#ifndef __INT_OPDOTSLASH_H__
#define __INT_OPDOTSLASH_H__

/* Scalar ./ Scalar */

#define s0s0OpDotSlashs0(in1,in2)				srdivs(in1,in2)

#define d0d0OpDotSlashd0(in1,in2)				drdivs(in1,in2)
	
#define c0c0OpDotSlashc0(in1,in2)				crdivs(in1,in2)

#define z0z0OpDotSlashz0(in1,in2)				zrdivs(in1,in2)

#define s0c0OpDotSlashc0(in1,in2)				crdivs(FloatComplex(in1,0),in2)

#define c0s0OpDotSlashc0(in1,in2)				crdivs(in1,FloatComplex(in2,0))

#define d0z0OpDotSlashz0(in1,in2)				zrdivs(DoubleComplex(in1,0),in2)

#define z0d0OpDotSlashz0(in1,in2)				zrdivs(in1,DoubleComplex(in2,0))


/* Scalar ./ Matrix */

#define s0s2OpDotSlashs2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= srdivs(in1,in2[i]);

#define d0d2OpDotSlashd2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= drdivs(in1,in2[i]);

#define c0c2OpDotSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1,in2[i]);

#define z0z2OpDotSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1,in2[i]);

#define s0c2OpDotSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(FloatComplex(in1,0),in2[i]);

#define d0z2OpDotSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(DoubleComplex(in1,0),in2[i]);

#define c0s2OpDotSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1,FloatComplex(in2[i],0));

#define z0d2OpDotSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1,DoubleComplex(in2[i],0));


/* Matrix ./ Scalar */

#define s2s0OpDotSlashs2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= srdivs(in1[i],in2);

#define d2d0OpDotSlashd2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= drdivs(in1[i],in2);

#define c2c0OpDotSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1[i],in2);

#define z2z0OpDotSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1[i],in2);

#define s2c0OpDotSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(FloatComplex(in1[i],0),in2);

#define d2z0OpDotSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(DoubleComplex(in1[i],0),in2);

#define c2s0OpDotSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1[i],FloatComplex(in2,0));

#define z2d0OpDotSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1[i],DoubleComplex(in2,0));

/* Matrix ./ Matrix */

#define s2s2OpDotSlashs2(in1,size1,in2,size2,out)		srdiva(in1,in2,size2[0]*size2[1],out)

#define d2d2OpDotSlashd2(in1,size1,in2,size2,out)		drdiva(in1,in2,size2[0]*size2[1],out)

#define c2c2OpDotSlashc2(in1,size1,in2,size2,out)		crdiva(in1,in2,size2[0]*size2[1],out)

#define c2s2OpDotSlashc2(in1,size1,in2,size2,out)		crdiva(in1,FloatComplexMatrix(in2,0,size2[0]*size2[1]),size2[0]*size2[1],out)

#define s2c2OpDotSlashc2(in1,size1,in2,size2,out)		crdiva(FloatComplexMatrix(in1,0,size1[0]*size1[1]),in2,size2[0]*size2[1],out)

#define z2z2OpDotSlashz2(in1,size1,in2,size2,out)		zrdiva(in1,in2,size2[0]*size2[1],out)

#define z2d2OpDotSlashc2(in1,size1,in2,size2,out)		crdiva(in1,DoubleComplexMatrix(in2,0,size2[0]*size2[1]),size2[0]*size2[1],out)

#define d2z2OpDotSlashc2(in1,size1,in2,size2,out)		crdiva(DoubleComplexMatrix(in1,0,size1[0]*size1[1]),in2,size2[0]*size2[1],out)



#endif /* !__INT_OPDOTSLASH_H__ */
