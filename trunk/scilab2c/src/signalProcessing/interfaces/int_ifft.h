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

#ifndef __INT_IFFT_H__
#define __INT_IFFT_H__

#define s0ifftc0(in)			FloatComplex(siffts(in),0)

#define d0ifftz0(in)			DoubleComplex(diffts(in),0)

#define c0ifftc0(in)			ciffts(in)

#define z0ifftz0(in)			ziffts(in)

#define s2ifftc2(in,size,out)		sifftma(in, size[0], size[1], out)

#define d2ifftz2(in,size,out)		difftma(in, size[0], size[1], out)

#define c2ifftc2(in,size,out)		cifftma(in, size[0], size[1], out)

#define z2ifftz2(in,size,out)		zifftma(in, size[0], size[1], out)

#endif /* !__INT_IFFT_H__ */
