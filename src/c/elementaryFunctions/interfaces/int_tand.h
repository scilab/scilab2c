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

#ifndef __INT_TAND_H__
#define __INT_TAND_H__

#define d0tandd0(in)				dtands(in)
#define s0tands0(in)				stands(in)
#define s0tandd0(in)				stands(in)
#define d2tandd2(in, size1, out)		dtanda(in, size1[0]*size1[1], out)
#define s2tands2(in, size1, out)		standa(in, size1[0]*size1[1], out)
#define s2tandd2(in, size1, out)		standa(in, size1[0]*size1[1], out)

#endif /* !__INT_TAND_H__ */
