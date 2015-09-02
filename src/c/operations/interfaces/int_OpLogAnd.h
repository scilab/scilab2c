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

#ifndef __INT_OPLOGAND_H__
#define __INT_OPLOGAND_H__

#define Bool2Float(in)				((in) ? 1.0f : 0.0f)

#define Bool2Double(in)				((in) ? 1.0 : 0.0)

#define Bool2Uint8(in)				((in) ? (uint8)1 : (uint8)0)

#define Bool2Int8(in)				((in) ? (int8)1 : (int8)0)

#define Bool2Uint16(in)				((in) ? (uint16)1 : (uint16)0)

#define Bool2Int16(in)				((in) ? (int16)1 : (int16)0)

/*scalar and scalar*/

#define s0s0OpLogAnds0(in1, in2)		Bool2Float(in1 != 0.0 && in2 != 0.0)

#define s0c0OpLogAnds0(in1, in2)		Bool2Float(in1 != 0.0 && (creals(in2) != 0.0 || cimags(in2)))

#define c0s0OpLogAnds0(in1, in2)		Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) && in2 != 0.0)

#define c0c0OpLogAnds0(in1, in2)		Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) && (creals(in2) != 0.0 || cimags(in2)))


#define d0d0OpLogAndd0(in1, in2)		Bool2Double(in1 != 0.0 && in2 != 0.0)

#define z0z0OpLogAndd0(in1, in2)		Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && (zreals(in2) != 0.0 || zimags(in2)))

#define d0z0OpLogAndd0(in1, in2)		Bool2Double(in1 != 0.0 && (zreals(in2) != 0.0 || zimags(in2)))

#define z0d0OpLogAndd0(in1, in2)		Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && in2 != 0.0)

#define u80u80OpLogAndu80(in1, in2)		Bool2Uint8(in1 != 0 && in2 != 0)

#define i80i80OpLogAndi80(in1, in2)		Bool2Int8(in1 != 0 && in2 != 0)

#define u160u160OpLogAndu160(in1, in2)		Bool2Uint16(in1 != 0 && in2 != 0)

#define i160i160OpLogAndi160(in1, in2)		Bool2Int16(in1 != 0 && in2 != 0)


/*matrix and scalar*/

#define s2s0OpLogAnds2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Float(in1[i] != 0.0 && in2 != 0.0);}

#define s2c0OpLogAnds2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Float(in1[i] != 0.0 && (creals(in2) != 0.0 || cimags(in2)));}

#define c2s0OpLogAnds2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Float((creals(in1[i]) != 0.0 || cimags(in1[i]) != 0.0) && in2 != 0.0);}

#define c2c0OpLogAnds2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Float((creals(in1[i]) != 0.0 || cimags(in1[i]) != 0.0) && (creals(in2) != 0.0 || cimags(in2)));}


#define d2d0OpLogAndd2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Double(in1[i] != 0.0 && in2 != 0.0);}

#define z2z0OpLogAndd2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && (zreals(in2) != 0.0 || zimags(in2)));}

#define d2z0OpLogAndd2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Double(in1[i] != 0.0 && (zreals(in2) != 0.0 || zimags(in2)));}

#define z2d0OpLogAndd2(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] = Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && in2 != 0.0);}

#define u82u80OpLogAndu82(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Uint8(in1[i] != 0 && in2 != 0);}

#define i82i80OpLogAndi82(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Int8(in1[i] != 0 && in2 != 0);}

#define u82u80OpLogAndu82(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Uint8(in1[i] != 0 && in2 != 0);}

#define u162u160OpLogAndu162(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Uint16(in1[i] != 0 && in2 != 0);}

#define i162i160OpLogAndi162(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Int16(in1[i] != 0 && in2 != 0);}

/*scalar and matrix*/

#define s0s2OpLogAnds2(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float(in1 != 0.0 && in2[i] != 0.0);}

#define s0c2OpLogAnds2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Float(in1 != 0.0 && (creals(in2[i]) != 0.0 || cimags(in2[i])));}

#define c0s2OpLogAnds2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) && in2[i] != 0.0);}

#define c0c2OpLogAnds2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) && (creals(in2[i]) != 0.0 || cimags(in2[i])));}


#define d0d2OpLogAndd2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double(in1 != 0.0 && in2[i] != 0.0);}

#define z0z2OpLogAndd2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define d0z2OpLogAndd2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double(in1 != 0.0 && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define z0d2OpLogAndd2(in1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && in2[i] != 0.0);}

#define u80u82OpLogAndu82(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint8(in1 != 0 && in2[i] != 0);}

#define i80i82OpLogAndi82(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int8(in1 != 0 && in2[i] != 0);}

#define u160u162OpLogAndu162(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint16(in1 != 0 && in2[i] != 0);}

#define i160i162OpLogAndi162(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int16(in1 != 0 && in2[i] != 0);}

/*TODO matrix and matrix*/

#define s2s2OpLogAnds2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float(in1[i] != 0.0 && in2[i] != 0.0);}

#define s2c2OpLogAnds2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Float(in1[i] != 0.0 && (creals(in2[i]) != 0.0 || cimags(in2[i])));}

#define c2s2OpLogAnds2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Float((creals(in1[i]) != 0.0 || cimags(in1[i]) != 0.0) && in2[i] != 0.0);}

#define c2c2OpLogAnds2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Float((creals(in1[i]) != 0.0 || cimags(in1[i]) != 0.0) && (creals(in2[i]) != 0.0 || cimags(in2[i])));}


#define d2d2OpLogAndd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double(in1[i] != 0.0 && in2[i] != 0.0);}

#define z2z2OpLogAndd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define d2z2OpLogAndd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double(in1[i] != 0.0 && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define z2d2OpLogAndd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] = Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && in2[i] != 0.0;)}


#define u82u82OpLogAndu82(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint8(in1[i] != 0 && in2[i] != 0);}

#define i82i82OpLogAndi82(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int8(in1[i] != 0 && in2[i] != 0);}

#define u162u162OpLogAndu162(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint16(in1[i] != 0 && in2[i] != 0);}

#define i162i162OpLogAndi162(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int16(in1[i] != 0 && in2[i] != 0);}

#endif /* !__INT_OPLOGAND_H__ */
