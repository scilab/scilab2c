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

#ifndef __INT_INVERT_H__
#define __INT_INVERT_H__

#define s0inverts0(in)				1/in

#define d0invertd0(in)				1/in

#define c0invertc0(in)				crdivs(FloatComplex(1,0),in)

#define z0invertz0(in)				zrdivs(DoubleComplex(1,0),in)

#define s2inverts2(in,size,out)		sinverma(in, out, size[0])

#define d2invertd2(in,size,out)		dinverma(in, out, size[0])

#define c2invertc2(in,size,out)		cinverma(in, out, size[0])

#define z2invertz2(in,size,out)		zinverma(in, out, size[0])

#endif /* !__INT_INVERT_H__ */
