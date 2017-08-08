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

#ifndef __INT_SIND_H__
#define __INT_SIND_H__

#define d0sindd0(in)				dsinds(in)
#define s0sinds0(in)				ssinds(in)
#define s0sindd0(in)				ssinds(in)
#define d2sindd2(in, size1, out)		dsinda(in, size1[0]*size1[1], out)
#define s2sinds2(in, size1, out)		ssinda(in, size1[0]*size1[1], out)
#define s2sindd2(in, size1, out)		ssinda(in, size1[0]*size1[1], out)

#endif /* !__INT_SIND_H__ */
