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

#ifndef __INT_STATMAX_H__
#define __INT_STATMAX_H__

#define s0maxs0(in)			smaxs(in)

#define d0maxd0(in)			dmaxs(in)

#define s2maxs0(in,size)		smaxa(in, size[0]*size[1])

#define d2maxd0(in,size)		dmaxa(in, size[0]*size[1])



#define s0s0maxs0(in1,in2)			smaxs(in1)

#define d0d0maxd0(in1,in2)			dmaxs(in1)
 
#define s2s0maxs2(in1,size,in2,out)		(in2==2) ? scolumnmaxa(in1, size[0], size[1], out) : srowmaxa(in1, size[0], size[1], out) 

#define d2d0maxd2(in1,size,in2,out)		(in2==2) ? dcolumnmaxa(in1, size[0], size[1], out) : drowmaxa(in1, size[0], size[1], out) 


#endif /* !__INT_STATMAX_H__ */
