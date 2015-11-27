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
//#ifndef __INT_MAX_H__
//#define __INT_MAX_H__

#define s0maxs0(in)	in

#define d0maxd0(in)	in

#define u80maxu80(in)   (uint8)in

#define u160maxu160(in) (uint16)in

#define i80maxi80(in)   (int8)in

#define i160maxi160(in) (int16)in

#define s2maxs0(in,size)			smaxa(in, size[0]*size[1])

#define d2maxd0(in,size)			dmaxa(in, size[0]*size[1])

#define c2maxc0(in,size)			cmaxa(in, size[0]*size[1])

#define z2maxz0(in,size)			zmaxa(in, size[0]*size[1])

#define u82maxu80(in,size)                      u8maxa(in, size[0]*size[1])

#define u162maxu160(in,size)                    u16maxa(in, size[0]*size[1])

#define i82maxi80(in,size)                      i8maxa(in, size[0]*size[1])

#define i162maxi160(in,size)                    i16maxa(in, size[0]*size[1])



#define s0s0maxs0(in1,in2)			max(in1,in2)

#define d0d0maxd0(in1,in2)			max(in1,in2)

#define u80u80maxu80(in1,in2)                   max(in1,in2)
 
#define u160u160maxu160(in1,in2)                max(in1,in2)

#define i80i80maxi80(in1,in2)                   max(in1,in2)
 
#define i160i160maxi160(in1,in2)                max(in1,in2)

#define s2s2maxs2(in1,size1,in2,size2,out)		maxa(in1, size1, in2, size2, out)

#define d2d2maxd2(in1,size1,in2,size2,out)		maxa(in1, size1, in2, size2, out)

#define u82u82maxu82(in1,size1,in2,size2,out)		maxa(in1, size1, in2, size2, out)

#define u162u162maxu162(in1,size1,in2,size2,out)	maxa(in1, size1, in2, size2, out)

#define i82i82maxi82(in1,size1,in2,size2,out)		maxa(in1, size1, in2, size2, out)

#define i162i162maxi162(in1,size1,in2,size2,out)	maxa(in1, size1, in2, size2, out)


#define s2s0maxs2(in1,size,in2,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1[i],in2);\
							}							

#define d2d0maxd2(in1,size,in2,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1[i],in2);\
							}

#define u82u80maxu82(in1,size,in2,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1[i],in2);\
							}

#define u162u160maxu162(in1,size,in2,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1[i],in2);\
							}

#define i82i80maxi82(in1,size,in2,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1[i],in2);\
							}

#define i162i160maxi162(in1,size,in2,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1[i],in2);\
							}
							
#define s0s2maxs2(in1,in2,size,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1,in2[i]);\
							}
												
#define d0d2maxd2(in1,in2,size,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1,in2[i]);\
							}

#define u80u82maxu82(in1,in2,size,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1,in2[i]);\
							}

#define u160u162maxu162(in1,in2,size,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1,in2[i]);\
							}

#define i80i82maxi82(in1,in2,size,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1,in2[i]);\
							}

#define i160i162maxi162(in1,in2,size,out)		{int i;\
							for (i=0;i<size[0]*size[1];i++) out[i]=max(in1,in2[i]);\
							}

/*'r'  and 'c' case  */	
#define s0g2maxs0(in1,in2,size2)			(in2[0]=='r') ? srowmaxs(in1) : scolumnmaxs(in1)	

#define d0g2maxd0(in1,in2,size2)			(in2[0]=='r') ? drowmaxs(in1) : dcolumnmaxs(in1)	

#define c0g2maxc0(in1,in2,size2)			(in2[0]=='r') ? crowmaxs(in1) : ccolumnmaxs(in1)	

#define z0g2maxz0(in1,in2,size2)			(in2[0]=='r') ? zrowmaxs(in1) : zcolumnmaxs(in1)

#define u80g2maxu80(in1,in2,size2)			(in2[0]=='r') ? u8rowmaxs(in1) : u8columnmaxs(in1)

#define u160g2maxu160(in1,in2,size2)			(in2[0]=='r') ? u16rowmaxs(in1) : u16columnmaxs(in1)

#define i80g2maxi80(in1,in2,size2)			(in2[0]=='r') ? i8rowmaxs(in1) : i8columnmaxs(in1)

#define i160g2maxi160(in1,in2,size2)			(in2[0]=='r') ? i16rowmaxs(in1) : i16columnmaxs(in1)	
	

#define s2g2maxs2(in1,size1,in2,size2,out)		(in2[0]=='r') ? srowmaxa(in1,size1[0],size1[1],out) : scolumnmaxa(in1,size1[0],size1[1],out)	

#define d2g2maxd2(in1,size1,in2,size2,out)		(in2[0]=='r') ? drowmaxa(in1,size1[0],size1[1],out) : dcolumnmaxa(in1,size1[0],size1[1],out)

#define c2g2maxc2(in1,size1,in2,size2,out)		(in2[0]=='r') ? crowmaxa(in1,size1[0],size1[1],out) : ccolumnmaxa(in1,size1[0],size1[1],out)

#define z2g2maxz2(in1,size1,in2,size2,out)		(in2[0]=='r') ? zrowmaxa(in1,size1[0],size1[1],out) : zcolumnmaxa(in1,size1[0],size1[1],out)	

#define u82g2maxu82(in1,size1,in2,size2,out)		(in2[0]=='r') ? u8rowmaxa(in1,size1[0],size1[1],out) : u8columnmaxa(in1,size1[0],size1[1],out)	

#define u162g2maxu162(in1,size1,in2,size2,out)		(in2[0]=='r') ? u16rowmaxa(in1,size1[0],size1[1],out) : u16columnmaxa(in1,size1[0],size1[1],out)
	
#define i82g2maxi82(in1,size1,in2,size2,out)		(in2[0]=='r') ? i8rowmaxa(in1,size1[0],size1[1],out) : i8columnmaxa(in1,size1[0],size1[1],out)	

#define i162g2maxi162(in1,size1,in2,size2,out)		(in2[0]=='r') ? i16rowmaxa(in1,size1[0],size1[1],out) : i16columnmaxa(in1,size1[0],size1[1],out)


	


#endif /* !__INT_STATMAX_H__ */
