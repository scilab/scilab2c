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



/* Matrix + Matrix */

#define s2s2OpPluss2(in1,size,in2,size,out)		saddma(in1, size[0]*size[1], in2, size[0]*size[1], out)

#define d2d2OpPlusd2(in1,size,in2,size,out)		daddma(in1, size[0]*size[1], in2, size[0]*size[1], out)

#define c2c2OpPlusc2(in1,size,in2,size,out)		caddma(in1, size[0]*size[1], in2, size[0]*size[1], out)

#define s2c2OpPlusc2(in1,size,in2,size,out)		caddma(FloatComplex(in1,0), size[0]*size[1], in2, size[0]*size[1], out)

#define c2s2OpPlusc2(in1,size,in2,size,out)		caddma(in1, size[0]*size[1], FloatComplex(in2,0), size[0]*size[1], out)

#define z2z2OpPlusz2(in1,size,in2,size,out)		zaddma(in1, size[0]*size[1], in2, size[0]*size[1], out)

#define d2z2OpPlusz2(in1,size,in2,size,out)		zaddma(DoubleComplex(in1,0), size[0]*size[1], in2, size[0]*size[1], out)

#define z2d2OpPlusz2(in1,size,in2,size,out)		zaddma(in1, size[0]*size[1], DoubleComplex(in2,0), size[0]*size[1], out)




#endif /* !__INT_OPPLUS_H__ */
