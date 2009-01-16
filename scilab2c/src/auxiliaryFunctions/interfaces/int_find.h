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

/* 1 input, 1 output */

#define s0finds0(in)						(in == 0) ? -1 : in
			
#define d0findd0(in)						(in == 0) ? -1 : in

#define c0finds0(in)						((creals(in) == 0) && (cimags(in) == 0)) ? -1 : in

#define z0findd0(in)						((zreals(in) == 0) && (zimags(in) == 0)) ? -1 : in

#define s2finds2(in,size,out,sizeOut)			sfinda(in, size[0]*size[1], out, sizeOut)

#define d2findd2(in,size,out,sizeOut)			dfinda(in, size[0]*size[1], out, sizeOut)

#define c2finds2(in,size,out,sizeOut)			cfinda(in, size[0]*size[1], out, sizeOut)

#define z2findd2(in,size,out,sizeOut)			zfinda(in, size[0]*size[1], out, sizeOut)

/* 1 input, 2 outputs */

#define s0finds0s0(in,out1,out2)				if (in==0) {out1=0;out2=0;}

#define d0findd0d0(in,out1,out2)				if (in==0) {out1=0;out2=0;}

#define c0finds0s0(in,out1,out2)				if ((creals(in)==0) && (cimags(in)==0)) {out1=0;out2=0;}

#define z0findd0d0(in,out1,out2)				if ((zreals(in)==0) && (zimags(in)==0)) {out1=0;out2=0;}

#define s2finds2s2(in,size,out1,out2)			sfind2d(in,size[0],size[1],&out1,&out2)

#define d2findd2d2(in,size,out1,out2)			dfind2d(in,size[0],size[1],&out1,&out2)

#define c2finds2s2(in,size,out1,out2)			cfind2d(in,size[0],size[1],&out1,&out2)

#define z2finds2s2(in,size,out1,out2)			zfind2d(in,size[0],size[1],&out1,&out2)

/* 2 inputs, 1 output */

#define s0s0finds0(in1,in2)					s0finds0(in1)

#define d0d0findd0(in1,in2)					d0findd0(in1)

#define c0s0finds0(in1,in2)					c0finds0(in1)

#define z0d0findd0(in1,in2)					z0findd0(in1)

#define s2s0finds2(in1,size,in2,out)			s2finds2(in1,size,out_tmp);for(int i=0;i<in2;i++) out[i]=out_tmp[i];	

#define d2d0findd2(in1,size,in2,out)			d2findd2(in1,size,out_tmp);for(int i=0;i<in2;i++) out[i]=out_tmp[i];

#define c2s0finds2(in1,size,in2,out)			c2finds2(in1,size,out_tmp);for(int i=0;i<in2;i++) out[i]=out_tmp[i];

#define z2d0findd2(in1,size,in2,out)			z2findd2(in1,size,out_tmp);for(int i=0;i<in2;i++) out[i]=out_tmp[i];

/* 2 inputs, 2 outputs */			

#define s0s0finds0s0(in1,in2,out1,out2)			s0finds0s0(in1,out1,out2)			

#define d0d0findd0d0(in1,in2,out1,out2)			d0findd0d0(in1,out1,out2)			

#define c0s0finds0s0(in1,in2,out1,out2)			c0finds0s0(in1,out1,out2)			

#define z0d0findd0d0(in1,in2,out1,out2)			z0findd0d0(in1,out1,out2)

#define s2s0finds2s2(in1,size,in2,out1,out2)		s2finds2s2(in1,size,out1_tmp,out_tmp2);for(int i=0;i<in2;i++) {out1[i]=out1_tmp[i];out2[i]=	out2_tmp[i];}

#define d2d0findd2d2(in1,size,in2,out1,out2)		d2findd2d2(in1,size,out1_tmp,out_tmp2);for(int i=0;i<in2;i++) {out1[i]=out1_tmp[i];out2[i]=	out2_tmp[i];}						

#define c2s0finds2s2(in1,size,in2,out1,out2)		c2finds2s2(in1,size,out1_tmp,out_tmp2);for(int i=0;i<in2;i++) {out1[i]=out1_tmp[i];out2[i]=	out2_tmp[i];}				

#define z2d0findd2d2(in1,size,in2,out1,out2)		z2findd2d2(in1,size,out1_tmp,out_tmp2);for(int i=0;i<in2;i++) {out1[i]=out1_tmp[i];out2[i]=	out2_tmp[i];}			



#endif /* !__INT_FIND_H__ */

