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

#ifndef __INT_OPDOTSTAR_H__
#define __INT_OPDOTSTAR_H__

/* Scalar .* Scalar */

#define s0s0OpDotStars0(in1,in2)				smuls(in1,in2)

#define d0d0OpDotStard0(in1,in2)				dmuls(in1,in2)
	
#define c0c0OpDotStarc0(in1,in2)				cmuls(in1,in2)

#define z0z0OpDotStarz0(in1,in2)				zmuls(in1,in2)

#define u80u80OpDotStaru80(in1,in2)                             u8muls(in1,in2)

#define u160u160OpDotStaru160(in1,in2)                          u16muls(in1,in2)

#define i80i80OpDotStari80(in1,in2)                             i8muls(in1,in2)

#define i160i60OpDotStari60(in1,in2)                            i16muls(in1,in2)

#define s0c0OpDotStarc0(in1,in2)				cmuls(FloatComplex(in1,0),in2)

#define c0s0OpDotStarc0(in1,in2)				cmuls(in1,FloatComplex(in2,0))

#define d0z0OpDotStarz0(in1,in2)				zmuls(DoubleComplex(in1,0),in2)

#define z0d0OpDotStarz0(in1,in2)				zmuls(in1,DoubleComplex(in2,0))


/* Scalar .* Matrix */

#define s0s2OpDotStars2(in1,in2,size,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= smuls(in1,in2[i]);}

#define d0d2OpDotStard2(in1,in2,size,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= dmuls(in1,in2[i]);}

#define c0c2OpDotStarc2(in1,in2,size,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= cmuls(in1,in2[i]);}

#define z0z2OpDotStarz2(in1,in2,size,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= zmuls(in1,in2[i]);}

#define u80u82OpDotStaru80(in1,in2,size,out)                    {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = u8muls(in1,in2[i]);}

#define u160u162OpDotStaru160(in1,in2,size,out)                 {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = u16muls(in1,in2[i]);}

#define i80i82OpDotStari80(in1,in2,size,out)                    {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = i8muls(in1,in2[i]);}

#define i160i162OpDotStari160(in1,in2,size,out)                 {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = i16muls(in1,in2[i]);}

#define s0c2OpDotStarc2(in1,in2,size,out)			c0c2OpDotStarc2(FloatComplex(in1,0),in2,size,out)

#define d0z2OpDotStarz2(in1,in2,size,out)			z0z2OpDotStarz2(DoubleComplex(in1,0),in2,size,out)

#define c0s2OpDotStarc2(in1,in2,size,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= cmuls(in1,FloatComplex(in2[i],0));}

#define z0d2OpDotStarz2(in1,in2,size,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= zmuls(in1,DoubleComplex(in2[i],0));}


/* Matrix .* Scalar */

#define s2s0OpDotStars2(in1,size,in2,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= smuls(in1[i],in2);}

#define d2d0OpDotStard2(in1,size,in2,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= dmuls(in1[i],in2);}

#define c2c0OpDotStarc2(in1,size,in2,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= cmuls(in1[i],in2);}

#define z2z0OpDotStarz2(in1,size,in2,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= zmuls(in1[i],in2);}

#define u82u80OpDotStaru82(in1,size,in2,out)                    {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = u8muls(in[i],in2);}

#define u162u160OpDotStaru162(in1,size,in2,out)                 {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = u16muls(in[i],in2);}

#define i82i80OpDotStari82(in1,size,in2,out)                    {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = i8muls(in[i],in2);}

#define i162i160OpDotStari162(in1,size,in2,out)                 {int i=0;\
                                                                        for(i=0;i<size[0]*size[1];i++) out[i] = i16muls(in[i],in2);}

#define s2c0OpDotStarc2(in1,size,in2,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= cmuls(FloatComplex(in1[i],0),in2);}

#define d2z0OpDotStarz2(in1,size,in2,out)			{int i=0;\
									for(i=0;i<size[0]*size[1];i++) out[i]= zmuls(DoubleComplex(in1[i],0),in2);}

#define c2s0OpDotStarc2(in1,size,in2,out)			c2c0OpDotStarc2(in1,size,FloatComplex(in2,0),out)

#define z2d0OpDotStarz2(in1,size,in2,out)			z2z0OpDotStarz2(in1,size,DoubleComplex(in2,0),out)	

/* Matrix .* Matrix */

#define s2s2OpDotStars2(in1,size1,in2,size2,out)		smula(in1,in2,size1[0]*size2[1],out)

#define d2d2OpDotStard2(in1,size1,in2,size2,out)		dmula(in1,in2,size1[0]*size2[1],out)

#define c2c2OpDotStarc2(in1,size1,in2,size2,out)		cmula(in1,in2,size1[0]*size2[1],out)

#define z2z2OpDotStarz2(in1,size1,in2,size2,out)		zmula(in1,in2,size1[0]*size2[1],out)

#define u82u82OpDotStaru82(in1,size1,in2,size2,out)             u8mula(in1,in2,size1[0]*size2[1],out)

#define u162u162OpDotStaru162(in1,size1,in2,size2,out)          u16mula(in1,in2,size1[0]*size2[1],out)

#define i82i82OpDotStari82(in1,size1,in2,size2,out)             i8mula(in1,in2,size1[0]*size2[1],out)

#define i162i61OpDotStari162(in1,size1,in2,size2,out)           i16mula(in1,in2,size1[0]*size2[1],out)


#define c2s2OpDotStarc2(in1,size1,in2,size2,out)		{int i=0;\
										for(i=0;i<size1[0]*size2[1];i++) out[i]= cmuls(in1[i],FloatComplex(in2[i],0));}

#define s2c2OpDotStarc2(in1,size1,in2,size2,out)		{int i=0;\
										for(i=0;i<size1[0]*size2[1];i++) out[i]= cmuls(FloatComplex(in1[i],0),in2[i]);}


#define z2d2OpDotStarz2(in1,size1,in2,size2,out)		{int i=0;\
										for(i=0;i<size1[0]*size2[1];i++) out[i]= zmuls(in1[i],DoubleComplex(in2[i],0));}

#define d2z2OpDotStarz2(in1,size1,in2,size2,out)		{int i=0;\
										for(i=0;i<size1[0]*size2[1];i++) out[i]= zmuls(DoubleComplex(in1[i],0),in2[i]);}


#endif /* !__INT_OPDOTSTAR_H__ */
