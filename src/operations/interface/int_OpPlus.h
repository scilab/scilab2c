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

#ifndef __INT_OPPLUS_H__
#define __INT_OPPLUS_H__


/* Scalar + Scalar */

#define s0s0OpPluss0(in1,in2)				sadds(in1,in2)

#define d0d0OpPlusd0(in1,in2)				dadds(in1,in2)
	
#define c0c0OpPlusc0(in1,in2)				cadds(in1,in2)

#define z0z0OpPlusz0(in1,in2)				zadds(in1,in2)

#define s0c0OpPlusc0(in1,in2)				cadds(FloatComplex(in1,0),in2)

#define c0s0OpPlusc0(in1,in2)				cadds(in1,FloatComplex(in2,0))

#define d0z0OpPlusz0(in1,in2)				zadds(DoubleComplex(in1,0),in2)

#define z0d0OpPlusz0(in1,in2)				zadds(in1,DoubleComplex(in2,0))



/* Matrix + Scalar */

#define s2s0OpPluss2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = sadds(in1[i],in2)

#define d2d0OpPlusd2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = dadds(in1[i],in2)

#define c2c0OpPlusc2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = cadds(in1[i],in2)

#define c2s0OpPlusc2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = cadds(in1[i],FloatComplex(in2,0))

#define s2c0OpPlusc2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = cadds(FloatComplex(in1[i],0),in2)

#define z2z0OpPlusz2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = zadds(in1[i],in2)

#define z2d0OpPlusz2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = zadds(in1[i],DoubleComplex(in2,0))

#define d2z0OpPlusz2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = zadds(DoubleComplex(in1[i],0),in2)


/* Scalar + Matrix */

#define s0s2OpPluss2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = sadds(in1,in2[i])

#define d0d2OpPlusd2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = dadds(in1,in2[i])

#define c0c2OpPlusc2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = cadds(in1,in2[i])

#define s0c2OpPlusc2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = cadds(FloatComplex(in1,0),in2[i])

#define c0s2OpPlusc2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = cadds(in1,FloatComplex(in2[i],0))

#define z0z2OpPlusz2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = zadds(in1,in2[i])

#define d0z2OpPlusz2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = zadds(DoubleComplex(in1,0),in2[i])

#define z0d2OpPlusz2(in1,size,in2,out)		for (int i=0;i<size[0]*size[1];i++) out[i] = zadds(in1,DoubleComplex(in2[i],0))



#endif /* !__INT_OPPLUS_H__ */
