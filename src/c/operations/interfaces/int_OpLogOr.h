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

#ifndef __INT_OPLOGOR_H__
#define __INT_OPLOGOR_H__

#define Bool2Float(in)			((in) ? 1.0f : 0.0f)

#define Bool2Double(in)			((in) ? 1.0 : 0.0)

#define Bool2Uint8(in)				((in) ? (uint8)1 : (uint8)0)

#define Bool2Int8(in)				((in) ? (int8)1 : (int8)0)

#define Bool2Uint16(in)				((in) ? (uint16)1 : (uint16)0)

#define Bool2Int16(in)				((in) ? (int16)1 : (int16)0)

/*scalar or scalar */

#define s0s0OpLogOrs0(in1, in2)		Bool2Float(in1 != 0.0f || in2 != 0.0f)

#define d0d0OpLogOrd0(in1, in2)		Bool2Double(in1 != 0.0 || in2 != 0.0)

#define c0c0OpLogOrs0(in1, in2)		Bool2Float((creals(in1) != 0.0f || cimags(in1) != 0.0f) || (creals(in2) != 0.0f || cimags(in2)))

#define s0c0OpLogOrs0(in1, in2)		Bool2Float(in1 != 0.0f && (creals(in2) != 0.0f || cimags(in2)))

#define c0s0OpLogOrs0(in1, in2)		Bool2Float((creals(in1) != 0.0f || cimags(in1) != 0.0f) && in2 != 0.0f)

#define z0z0OpLogOrd0(in1, in2)		Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && (zreals(in2) != 0.0 || zimags(in2)))

#define d0z0OpLogOrd0(in1, in2)		Bool2Double(in1 != 0.0 && (zreals(in2) != 0.0 || zimags(in2)))

#define z0d0OpLogOrd0(in1, in2)		Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && in2 != 0.0)

#define u80u80OpLogOru80(in1, in2)		Bool2Uint8(in1 != 0 || in2 != 0)

#define i80i80OpLogOri80(in1, in2)		Bool2Int8(in1 != 0 || in2 != 0)

#define u160u160OpLogOru160(in1, in2)		Bool2Uint16(in1 != 0 || in2 != 0)

#define i160i160OpLogOri160(in1, in2)		Bool2Int16(in1 != 0 || in2 != 0)

/*matrix or scalar */

#define s2s0OpLogOrs2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Float(in1[i] != 0.0f || in2 != 0.0f);}

#define d2d0OpLogOrd2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Double(in1[i] != 0.0 || in2 != 0.0);}

#define c2c0OpLogOrs2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Float((creals(in1[i]) != 0.0f || cimags(in1[i]) != 0.0f) || (creals(in2) != 0.0f || cimags(in2)));}

#define s2c0OpLogOrs2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Float(in1[i] != 0.0f && (creals(in2) != 0.0f || cimags(in2)));}

#define c2s0OpLogOrs2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Float((creals(in1[i]) != 0.0f || cimags(in1[i]) != 0.0f) && in2 != 0.0f);}

#define z2z0OpLogOrd2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && (zreals(in2) != 0.0 || zimags(in2)));}

#define d2z0OpLogOrd2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Double(in1[i] != 0.0 && (zreals(in2) != 0.0 || zimags(in2)));}

#define z2d0OpLogOrd2(in1, size1, in2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && in2 != 0.0);}

#define i82i80OpLogOri82(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Int8(in1[i] != 0 || in2 != 0);}

#define u82u80OpLogOru82(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Uint8(in1[i] != 0 || in2 != 0);}

#define u162u160OpLogOru162(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Uint16(in1[i] != 0 || in2 != 0);}

#define i162i160OpLogOri162(in1, size1, in2, out)	{int i  = 0 ;\
                                                  for (i = 0 ; i < size1[0]*size1[1] ; i++ ) out[i] =  Bool2Int16(in1[i] != 0 || in2 != 0);}


/*scalar or matrix */

#define s0s2OpLogOrs2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float(in1 != 0.0 || in2[i] != 0.0);}

#define d0d2OpLogOrd2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double(in1 != 0.0 || in2[i] != 0.0);}

#define c0c2OpLogOrs2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) || (creals(in2[i]) != 0.0 || cimags(in2[i])));}

#define s0c2OpLogOrs2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float(in1 != 0.0 && (creals(in2[i]) != 0.0 || cimags(in2[i])));}

#define c0s2OpLogOrs2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) && in2[i] != 0.0);}

#define z0z2OpLogOrd2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define d0z2OpLogOrd2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double(in1 != 0.0 && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define z0d2OpLogOrd2(in1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && in2[i] != 0.0);}

#define u80u82OpLogOru82(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint8(in1 != 0 || in2[i] != 0);}

#define i80i82OpLogOri82(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int8(in1 != 0 || in2[i] != 0);}

#define u160u162OpLogOru162(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint16(in1 != 0 || in2[i] != 0);}

#define i160i162OpLogOri162(in1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ;  i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int16(in1 != 0 || in2[i] != 0);}

/*matrix or matrix */

#define s2s2OpLogOrs2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float(in1[i] != 0.0 || in2[i] != 0.0);}

#define d2d2OpLogOrd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double(in1[i] != 0.0 || in2[i] != 0.0);}

#define c2c2OpLogOrs2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float((creals(in1[i]) != 0.0 || cimags(in1[i]) != 0.0) || (creals(in2[i]) != 0.0 || cimags(in2[i])));}

#define s2c2OpLogOrs2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float(in1[i] != 0.0 && (creals(in2[i]) != 0.0 || cimags(in2[i])));}

#define c2s2OpLogOrs2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Float((creals(in1[i]) != 0.0 || cimags(in1[i]) != 0.0) && in2[i] != 0.0);}

#define z2z2OpLogOrd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define d2z2OpLogOrd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double(in1[i] != 0.0 && (zreals(in2[i]) != 0.0 || zimags(in2[i])));}

#define z2d2OpLogOrd2(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                         for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Double((zreals(in1[i]) != 0.0 || zimags(in1[i]) != 0.0) && in2[i] != 0.0);}

#define u82u82OpLogOru82(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint8(in1[i] != 0 || in2[i] != 0);}

#define i82i82OpLogOri82(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int8(in1[i] != 0 || in2[i] != 0);}

#define u162u162OpLogOru162(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Uint16(in1[i] != 0 || in2[i] != 0);}

#define i162i162OpLogOri162(in1, size1, in2, size2, out)	{int i  = 0 ;\
                                                 for (i = 0 ; i < size2[0]*size2[1] ; i++ ) out[i] =  Bool2Int16(in1[i] != 0 || in2[i] != 0);}

#endif /* !__INT_OPLOGOR_H__ */
