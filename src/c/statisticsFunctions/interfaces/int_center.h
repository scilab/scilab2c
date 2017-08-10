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
#ifndef __INT_CENTER_H__
#define __INT_CENTER_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2centerd2(in1,size, out) 				dcentera(in1,size[0],size[1],out)
#define d2g2centerd2(in1, size, in2, size2 ,out)		(in2[0] == 'r') ? dcenterrowa(in1, size[0], size[1], out) :  dcentercola(in1, size[0], size[1], out)	
#define d2d0centerd2(in1, size, in2 ,out)			(in2 == 1) ? dcenterrowa(in1, size[0], size[1], out) :  dcentercola(in1, size[0], size[1], out)	

#define s2centers2(in1,size, out) 				scentera(in1,size[0],size[1],out)
#define s2g2centers2(in1, size, in2, size2 ,out)		(in2[0] == 'r') ? scenterrowa(in1, size[0], size[1], out) :  scentercola(in1, size[0], size[1], out)	
#define s2d0centers2(in1, size, in2 ,out)			(in2 == 1) ? scenterrowa(in1, size[0], size[1], out) :  scentercola(in1, size[0], size[1], out)	

#define z2centerz2(in1,size, out) 				zcentera(in1,size[0],size[1],out)
#define z2g2centerz2(in1, size, in2, size2 ,out)		(in2[0] == 'r') ? zcenterrowa(in1, size[0], size[1], out) :  zcentercola(in1, size[0], size[1], out)	
#define z2d0centerz2(in1, size, in2 ,out)			(in2 == 1) ? zcenterrowa(in1, size[0], size[1], out) :  zcentercola(in1, size[0], size[1], out)	


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_CENTER_H__*/
