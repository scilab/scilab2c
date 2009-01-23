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

#ifndef __INT_OPPLUS_H__
#define __INT_OPPLUS_H__


/* Scalar + Scalar */

#define s0s0OpPluss0(in1,in2)				sadds(in1,in2)

#define d0d0OpPlusd0(in1,in2)				dadds(in1,in2)
	
#define c0c0OpPlusc0(in1,in2)				cadds(in1,in2)

#define z0z0OpPlusz0(in1,in2)				zadds(in1,in2)

#define s0c0OpPlusc0(in1,in2)				cadds(FloatComplex(in1,0),in2)

#define c0s0OpPlusc0(in1,in2)				cadds(in1,FloatComplex(in2,0))

#define d0z0OpPlusz0(in1,in2)				zadds(DoubleComplex(in1,0),in2)

#define z0d0OpPlusz0(in1,in2)				zadds(in1,DoubleComplex(in2,0))



/* Matrix + Scalar */

/*On transforme le scalaire en tableau et on se ramene à s2s2...s2*/
#define s2s0OpPluss2(in1,size,in2,out)		sfilla((float*)out,size[0],size[1],in2);\
								s2s2OpPluss2(in1,size,(float*)out,size,out)
								
/*On transforme le scalaire en tableau et on se ramene à d2d2...d2*/
#define d2d0OpPlusd2(in1,size,in2,out)		dfilla((double*)out,size[0],size[1],in2);\
								d2d2OpPlusd2(in1,size,(double*)out,size,out)
								
/*On transforme le scalaire en tableau et on se ramene à c2c2...c2*/								
#define c2c0OpPlusc2(in1,size,in2,out)		cfilla((floatComplex*)out,size[0],size[1],in2);\
								c2c2OpPlusc2(in1,size,(floatComplex*)out,size,out)
								
/*On transforme le scalaire float en scalaire floatComplex pour pouvoir utiliser c2c0...c2*/	
#define c2s0OpPlusc2(in1,size,in2,out)		c2c0OpPlusc2(in1,size,FloatComplex(in2,0),out)

/*On transforme le tableau de float en tableau de floatComplex pour pouvoir utiliser c2c0...c2*/	
#define s2c0OpPlusc2(in1,size,in2,out)		sfilla((float*)out,size[0],size[1],0);\
								c2c0OpPlusc2(FloatComplexMatrix(in1,(float*)out,size[0]*size[1]),size,in2,out)
								
/*On transforme le scalaire en tableau et on se ramene à z2z2...z2*/
#define z2z0OpPlusz2(in1,size,in2,out)		zfilla((doubleComplex*)out,size[0],size[1],in2);\
								z2z2OpPlusz2(in1,size,(doubleComplex*)out,size,out)
								
/*On transforme le scalaire double en scalaire doubleComplex pour pouvoir utiliser z2z0...z2*/
#define z2d0OpPlusz2(in1,size,in2,out)		z2z0OpPlusz2(in1,size,DoubleComplex(in2,0),out)

/*On transforme le tableau de double en tableau de doubleComplex pour pouvoir utiliser z2z0...z2*/
#define d2z0OpPlusz2(in1,size,in2,out)		dfilla((double*)out,size[0],size[1],0);\
								z2z0OpPlusz2(DoubleComplexMatrix(in1,(double*)out,size[0]*size[1]),size,in2,out)


/* Scalar + Matrix */

/*On transforme le scalaire en tableau et on se ramene à s2s2...s2*/
#define s0s2OpPluss2(in1,in2,size,out)		sfilla((float*)out,size[0],size[1],in1);\
								s2s2OpPluss2((float*)out,size,in2,size,out)
								
/*On transforme le scalaire en tableau et on se ramene à d2d2...d2*/
#define d0d2OpPlusd2(in1,in2,size,out)		dfilla((double*)out,size[0],size[1],in1);\
								d2d2OpPlusd2((double*)out,size,in2,size,out)
								
/*On transforme le scalaire en tableau et on se ramene à c2c2...c2*/
#define c0c2OpPlusc2(in1,in2,size,out)		cfilla((floatComplex*)out,size[0],size[1],in1);\
								c2c2OpPlusc2((floatComplex*)out,size,in2,size,out)
								
/*On transforme le scalaire float en scalaire floatComplex pour pouvoir utiliser c0c2...c2*/	
#define s0c2OpPlusc2(in1,in2,size,out)		c0c2OpPlusc2(FloatComplex(in1,0),in2,size,out)	
							
/*On transforme le tableau de float en tableau de floatComplex pour pouvoir utiliser c0c2...c2*/
#define c0s2OpPlusc2(in1,in2,size,out)		sfilla((float*)out,size[0],size[1],0);\
								c0c2OpPlusc2(in1,FloatComplexMatrix(in2,(float*)out,size[0]*size[1]),size,out)
								
/*On transforme le scalaire en tableau et on se ramene à z2z2...z2*/
#define z0z2OpPlusz2(in1,in2,size,out)		zfilla((doubleComplex*)out,size[0],size[1],in1);\
								z2z2OpPlusz2((doubleComplex*)out,size,in2,size,out)
								
/*On transforme le scalaire double en scalaire doubleComplex pour pouvoir utiliser z0z2...z2*/
#define d0z2OpPlusz2(in1,in2,size,out)		z0z2OpPlusz2(DoubleComplex(in1,0),in2,size,out)

/*On transforme le tableau de double en tableau de doubleComplex pour pouvoir utiliser z0z2...z2*/
#define z0d2OpPlusz2(in1,in2,size,out)		dfilla((double*)out,size[0],size[1],0);\
								z0z2OpPlusz2(in1,DoubleComplexMatrix(in2,(double*)out,size[0]*size[1]),size,out)
								


/* Matrix + Matrix */

#define s2s2OpPluss2(in1,size1,in2,size2,out)		sadda(in1, size1[0]*size1[1], in2, size2[0]*size2[1], out)

#define d2d2OpPlusd2(in1,size1,in2,size2,out)		dadda(in1, size1[0]*size1[1], in2, size2[0]*size2[1], out)

#define c2c2OpPlusc2(in1,size1,in2,size2,out)		cadda(in1, size1[0]*size1[1], in2, size2[0]*size2[1], out)

/*On transforme le tableau de float en tableau de floatComplex pour pouvoir utiliser c2c2...c2*/
#define s2c2OpPlusc2(in1,size1,in2,size2,out)		sfilla((float*)out,size1[0],size1[1],0);\
									c2c2OpPlusc2(FloatComplexMatrix(in1,(float*)out,size1[0]*size1[1]), size1, in2, size2, out)
									
/*On transforme le tableau de float en tableau de floatComplex pour pouvoir utiliser c2c2...c2*/
#define c2s2OpPlusc2(in1,size1,in2,size2,out)		sfilla((float*)out,size2[0],size2[1],0);\
									c2c2OpPlusc2(in1, size1, FloatComplexMatrix(in2,(float*)out,size2[0]*size2[1]), size2, out)

#define z2z2OpPlusz2(in1,size1,in2,size2,out)		zadda(in1, size1[0]*size1[1], in2, size2[0]*size2[1], out)

/*On transforme le tableau de double en tableau de doubleComplex pour pouvoir utiliser z2z2...z2*/
#define d2z2OpPlusz2(in1,size1,in2,size2,out)		dfilla((double*)out,size1[0],size1[1],0);\
									z2z2OpPlusz2(DoubleComplexMatrix(in1,(double*)out,size1[0]*size1[1]), size1, in2, size2, out)
									
/*On transforme le tableau de double en tableau de doubleComplex pour pouvoir utiliser z2z2...z2*/
#define z2d2OpPlusz2(in1,size1,in2,size2,out)		dfilla((double*)out,size2[0],size2[1],0);\
									z2z2OpPlusz2(in1, size1, DoubleComplexMatrix(in2,(double*)out,size2[0]*size2[1]), size2, out)






#endif /* !__INT_OPPLUS_H__ */
