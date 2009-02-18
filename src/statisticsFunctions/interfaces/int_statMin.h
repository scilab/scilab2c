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

#ifndef __INT_STATMIN_H__
#define __INT_STATMIN_H__

#define s0mins0(in)			smins(in)

#define d0mind0(in)			dmins(in)

#define s2mins0(in,size)		smina(in, size[0]*size[1])

#define d2mind0(in,size)		dmina(in, size[0]*size[1])



#define s0s0mins0(in1,in2)			smins(in1)

#define d0d0mind0(in1,in2)			dmins(in1)
 
#define s2s0mins2(in1,size,in2,out)		(in2==2) ? scolumnmina(in1, size[0], size[1], out) : srowmina(in1, size[0], size[1], out) 

#define d2d0mind2(in1,size,in2,out)		(in2==2) ? dcolumnmina(in1, size[0], size[1], out) : drowmina(in1, size[0], size[1], out) 


#endif /* !__INT_STATMIN_H__ */
