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

#ifndef __INT_SPEC_H__
#define __INT_SPEC_H__

/* Only eigenvalues */

#define s0specs0(in)			sspecs(in)

#define d0specd0(in)			dspecs(in)

#define c0specc0(in)			cspecs(in)

#define z0specz0(in)			zspecs(in)

#define s2specc2(in,size,out)		sspeca(in, size[0], out)

#define d2specz2(in,size,out)		dspeca(in, size[0], out)

#define c2specc2(in,size,out)		cspeca(in, size[0], out)

#define z2specz2(in,size,out)		zspeca(in, size[0], out)

/* Eigenvalues and eigenvectors */

#define s0specs0s0(in,out)			sspec2s(in,out)

#define d0specd0d0(in,out)			dspec2s(in,out)

#define c0specc0c0(in,out)			cspec2s(in,out)

#define z0specz0z0(in,out)			zspec2s(in,out)

#define s2specc2c2(in,size,out)		sspeca(in, size[0], out)

#define d2specz2z2(in,size,out)		dspeca(in, size[0], out)

#define c2specc2c2(in,size,out)		cspeca(in, size[0], out)

#define z2specz2z2(in,size,out)		zspeca(in, size[0], out)

#endif /* !__INT_SPEC_H__ */
