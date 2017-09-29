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
#ifndef __INT_CALERF_H__
#define __INT_CALERF_H__

#ifdef  __cplusplus
extern "C" {
#endif



#define d0d0calerfd0(in1,in2) 			dcalerfs(in1, in2)
#define d2d0calerfd2(in1, size, in2, out) 	dcalerfa(in1, size[0]*size[1], in2, out)

#define s0d0calerfs0(in1,in2) 			scalerfs(in1, in2)
#define s2d0calerfs2(in1, size, in2, out) 	scalerfa(in1, size[0]*size[1], in2, out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_CALERF_H__*/
