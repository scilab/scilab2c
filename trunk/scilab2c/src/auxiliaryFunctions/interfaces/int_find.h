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

#ifndef __INT_FIND_H__
#define __INT_FIND_H__

#define s0finds0(in)			(in == 0) ? -1 : in

#define d0findd0(in)			(in == 0) ? -1 : in

#define c0findc0(in)			((creals(in) == 0) && (cimags(in) == 0)) ? -1 : in

#define z0findz0(in)			((zreals(in) == 0) && (zimags(in) == 0)) ? -1 : in

#define s2finds2(in,size,out)		sfinda(in, size[0]*size[1])

#define d2findd2(in,size,out)		dfinda(in, size[0]*size[1])

#define c2findc2(in,size,out)		cfinda(in, size[0]*size[1])

#define z2findz2(in,size,out)		zfinda(in, size[0]*size[1])

#endif /* !__INT_FIND_H__ */
