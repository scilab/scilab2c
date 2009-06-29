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

#define s0s0OpLogOrs0(in1, in2)		Bool2Float(in1 != 0.0 || in2 != 0.0)

#define d0d0OpLogOrd0(in1, in2)		Bool2Double(in1 != 0.0 || in2 != 0.0)

#define c0c0OpLogOrs0(in1, in2)		Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) || (creals(in2) != 0.0 || cimags(in2))

#define s0c0OpLogOrs0(in1, in2)		Bool2Float(in1 != 0.0 && (creals(in2) != 0.0 || cimags(in2)))

#define c0s0OpLogOrs0(in1, in2)		Bool2Float((creals(in1) != 0.0 || cimags(in1) != 0.0) && in2 != 0.0)

#define z0z0OpLogOrd0(in1, in2)		Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && (zreals(in2) != 0.0 || zimags(in2))

#define d0z0OpLogOrd0(in1, in2)		Bool2Double(in1 != 0.0 && (zreals(in2) != 0.0 || zimags(in2))

#define z0d0OpLogOrd0(in1, in2)		Bool2Double((zreals(in1) != 0.0 || zimags(in1) != 0.0) && in2 != 0.0)


#endif /* !__INT_OPLOGOR_H__ */
