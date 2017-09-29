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
#ifndef __INT_MOMENT_H__
#define __INT_MOMENT_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2d0momentd0(in1,size,in2) 				dmoments(in1,size[0]*size[1], in2)
#define d2d0g2momentd2(in1, size, in2, in3, size2 ,out)		(in3[0] == 'r') ? dmomentrowa(in1, size[0], size[1], in2, out) :  dmomentcola(in1, size[0], size[1], in2, out)	

#define s2d0moments0(in1,size,in2) 				smoments(in1,size[0]*size[1], in2)
#define s2d0g2moments2(in1, size, in2, in3, size2 ,out)		(in3[0] == 'r') ? smomentrowa(in1, size[0], size[1], in2, out) :  smomentcola(in1, size[0], size[1], in2, out)	

#define z2d0momentz0(in1,size,in2) 				zmoments(in1,size[0]*size[1], in2)
#define z2d0g2momentz2(in1, size, in2, in3, size2 ,out)		(in3[0] == 'r') ? zmomentrowa(in1, size[0], size[1], in2, out) :  zmomentcola(in1, size[0], size[1], in2, out)	


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_MOMENT_H__*/
