/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_GAMMA_H__
#define __INT_GAMMA_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0gammad0(in1)  		dgammas(in1)
#define s0gammas0(in1)  		sgammas(in1)
#define d2gammad2(in1,size,out)		dgammaa(in1,size[0]*size[1],out)
#define s2gammas2(in1,size,out)		sgammaa(in1,size[0]*size[1],out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_GAMMA_H__*/
