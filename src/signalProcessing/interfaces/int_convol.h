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

#ifndef __INT_CONVOL_H__
#define __INT_CONVOL_H__

#define s0s0convols0(in1,in2)			in1*in2

#define d0d0convold0(in1,in2)			in1*in2

#define c0c0convolc0(in1,in2)			cmuls(in1,in2)

#define z0z0convolz0(in1,in2)			zmuls(in1,in2)


#define s2convols2(in,size,out)		sconvola(in, size[0]*size[1], out)

#define d2convold2(in,size,out)		dconvola(in, size[0]*size[1], out)

#define c2convolc2(in,size,out)		cconvola(in, size[0]*size[1], out)

#define z2convolz2(in,size,out)		zconvola(in, size[0]*size[1], out)

#endif /* !__INT_CONVOL_H__ */
