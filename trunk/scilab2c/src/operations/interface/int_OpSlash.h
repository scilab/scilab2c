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

#define s0s2OpSlashs2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= srdivs(in1,in2[i]);

#define d0d2OpSlashd2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= drdivs(in1,in2[i]);

#define c0c2OpSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1,in2[i]);

#define z0z2OpSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1,in2[i]);

#define s0c2OpSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(FloatComplex(in1,0),in2[i]);

#define d0z2OpSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(DoubleComplex(in1,0),in2[i]);

#define c0s2OpSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1,FloatComplex(in2[i],0));

#define z0d2OpSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1,DoubleComplex(in2[i],0));


/* Matrix / Scalar */

#define s2s0OpSlashs2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= srdivs(in1[i],in2);

#define d2d0OpSlashd2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= drdivs(in1[i],in2);

#define c2c0OpSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1[i],in2);

#define z2z0OpSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1[i],in2);

#define s2c0OpSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(FloatComplex(in1[i],0),in2);

#define d2z0OpSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(DoubleComplex(in1[i],0),in2);

#define c2s0OpSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= crdivs(in1[i],FloatComplex(in2,0));

#define z2d0OpSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zrdivs(in1[i],DoubleComplex(in2,0));

#endif /* !__INT_OPSLASH_H__ */
