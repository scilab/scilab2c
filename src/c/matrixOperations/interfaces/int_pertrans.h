/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_PERTRANS_H__
#define __INT_PERTRANS_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2pertransd2(in1, size, out)     dpertransa(in1, size[0], size[1], out)
#define d0pertransd0(in1)                dpertranss(in1)

#define s2pertranss2(in1, size, out)     spertransa(in1, size[0], size[1], out)
#define s0pertranss0(in1)                spertranss(in1)

#define z2pertransz2(in1, size, out)     zpertransa(in1, size[0], size[1], out)
#define z0pertransz0(in1)                zpertranss(in1)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_PERTRANS_H__*/
