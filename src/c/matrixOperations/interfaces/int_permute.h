// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


#ifndef __INT_PERMUTE_H__
#define __INT_PERMUTE_H__


#ifdef  __cplusplus
#extern "C" {
#endif

#define d2d2permuted2(in1, size1, in2, size2, out) (if(in2[0]==1)?in1: \
				dtransposea(in1, size1[0],size1[1],out))

#ifdef  __cplusplus
#} /* extern "C" */
#endif

#endif /*__INT_FLIPDIM_H__*/
