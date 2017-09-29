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

#ifndef __INT_RAND_H__
#define __INT_RAND_H__


#define rands0()				srands()

#define randd0()				drands()

#define randu80()                               u8rands()

#define randu160()                              u16rands()

#define randi80()                               i8rands()

#define randi160()                              i16rands()



#define s0rands0(in)			srands()

#define d0randd0(in)			drands()

#define c0randc0(in)			crands()

#define z0randz0(in)			zrands()

#define u80randd0(in)                  u8rands()

#define u160randd0(in)                u16rands()

#define i80randd0(in)                  i8rands()

#define i160randd0(in)                i16rands()


#define s0s0rands0(in1,in2)			srands()

#define d0d0randd0(in,in2)			drands()

#define u80u80randd0(in1,in2)                  u8rands()

#define u160u160randd0(in1,in2)             u16rands()

#define i80i80randd0(in1,in2)                i8rands()

#define i160i160randd0(in1,in2)             i16rands()


#define s0s0rands2(in1,in2,out)		sranda(out,(int)in1*(int)in2)	

#define d0d0randd2(in1,in2,out)		dranda(out,(int)in1*(int)in2)

#define u80u80randd2(in1,in2,out)      u8randa(out,(int)in1*(int)in2)

#define u160u160randd2(in1,in2,out)   u16randa(out,(int)in1*(int)in2)

#define i80i80randd2(in1,in2,out)      i8randa(out,(int)in1*(int)in2)

#define i160i160randd2(in1,in2,out)      i16randa(out,(int)in1*(int)in2)

#define s2rands2(in,size,out)		sranda(out, size[0]*size[1])

#define d2randd2(in,size,out)		dranda(out, size[0]*size[1])

#define c2randc2(in,size,out)		cranda(out, size[0]*size[1])

#define z2randz2(in,size,out)		zranda(out, size[0]*size[1])

#define u82randd2(in,size,out)         u8randa(out, size[0]*size[1])

#define u162randd2(in,size,out)       u16randa(out, size[0]*size[1])

#define i82randd2(in,size,out)         i8randa(out, size[0]*size[1])

#define i62randd2(in,size,out)         i16randa(out, size[0]*size[1])




#endif /* !__INT_RAND_H__ */
