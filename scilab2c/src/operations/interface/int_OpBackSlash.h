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

#ifndef __INT_OPBACKSLASH_H__
#define __INT_OPBACKSLASH_H__

/* Scalar \ Scalar */

#define s0s0OpBackSlashs0(in1,in2)				sldivs(in1,in2)

#define d0d0OpBackSlashd0(in1,in2)				dldivs(in1,in2)
	
#define c0c0OpBackSlashc0(in1,in2)				cldivs(in1,in2)

#define z0z0OpBackSlashz0(in1,in2)				zldivs(in1,in2)

#define s0c0OpBackSlashc0(in1,in2)				cldivs(FloatComplex(in1,0),in2)

#define c0s0OpBackSlashc0(in1,in2)				cldivs(in1,FloatComplex(in2,0))

#define d0z0OpBackSlashz0(in1,in2)				zldivs(DoubleComplex(in1,0),in2)

#define z0d0OpBackSlashz0(in1,in2)				zldivs(in1,DoubleComplex(in2,0))


/* Scalar \ Matrix */

#define s0s2OpBackSlashs2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= sldivs(in1,in2[i]);

#define d0d2OpBackSlashd2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= dldivs(in1,in2[i]);

#define c0c2OpBackSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= cldivs(in1,in2[i]);

#define z0z2OpBackSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zldivs(in1,in2[i]);

#define s0c2OpBackSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= cldivs(FloatComplex(in1,0),in2[i]);

#define d0z2OpBackSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zldivs(DoubleComplex(in1,0),in2[i]);

#define c0s2OpBackSlashc2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= cldivs(in1,FloatComplex(in2[i],0));

#define z0d2OpBackSlashz2(in1,in2,size,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zldivs(in1,DoubleComplex(in2[i],0));


/* Matrix \ Scalar */

#define s2s0OpBackSlashs2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= sldivs(in1[i],in2);

#define d2d0OpBackSlashd2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= dldivs(in1[i],in2);

#define c2c0OpBackSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= cldivs(in1[i],in2);

#define z2z0OpBackSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zldivs(in1[i],in2);

#define s2c0OpBackSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= cldivs(FloatComplex(in1[i],0),in2);

#define d2z0OpBackSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zldivs(DoubleComplex(in1[i],0),in2);

#define c2s0OpBackSlashc2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= cldivs(in1[i],FloatComplex(in2,0));

#define z2d0OpBackSlashz2(in1,size,in2,out)			for(int i=0;i<size[0]*size[1];i++) out[i]= zldivs(in1[i],DoubleComplex(in2,0));



#endif /* !__INT_OPBACKSLASH_H__ */
