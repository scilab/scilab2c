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
#ifndef __INT_WCENTER_H__
#define __INT_WCENTER_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2wcenterd2(in1,size, out) 				dwcentera(in1,size[0],size[1],out)
#define d2g2wcenterd2(in1, size, in2, size2 ,out)		(in2[0] == 'r') ? dwcenterrowa(in1, size[0], size[1], out) :  dwcentercola(in1, size[0], size[1], out)	
#define d2d0wcenterd2(in1, size, in2 ,out)			(in2 == 1) ? dwcenterrowa(in1, size[0], size[1], out) :  dwcentercola(in1, size[0], size[1], out)	

#define s2wcenters2(in1,size, out) 				swcentera(in1,size[0],size[1],out)
#define s2g2wcenters2(in1, size, in2, size2 ,out)		(in2[0] == 'r') ? swcenterrowa(in1, size[0], size[1], out) :  swcentercola(in1, size[0], size[1], out)	
#define s2d0wcenters2(in1, size, in2 ,out)			(in2 == 1) ? swcenterrowa(in1, size[0], size[1], out) :  swcentercola(in1, size[0], size[1], out)	

#define z2wcenterz2(in1,size, out) 				zwcentera(in1,size[0],size[1],out)
#define z2g2wcenterz2(in1, size, in2, size2 ,out)		(in2[0] == 'r') ? zwcenterrowa(in1, size[0], size[1], out) :  zwcentercola(in1, size[0], size[1], out)	
#define z2d0wcenterz2(in1, size, in2 ,out)			(in2 == 1) ? zwcenterrowa(in1, size[0], size[1], out) :  zwcentercola(in1, size[0], size[1], out)	


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_WCENTER_H__*/
