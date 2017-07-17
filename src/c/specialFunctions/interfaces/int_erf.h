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
#ifndef __INT_ERF_H__
#define __INT_ERF_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0erfd0(in1) derfs(in1)
#define s0erfs0(in1) serfs(in1)
#define d2erfd2(in1,size,out) derfa(in1,size[0],size[1],out)
#define s2erfs2(in1,size,out) serfa(in1,size[0],size[1],out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_ERF_H__*/
