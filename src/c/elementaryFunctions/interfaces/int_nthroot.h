 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_NTHROOT_H__
#define __INT_NTHROOT_H__

#define d2d2nthrootd2(in1, size1, in2, size2, out)        dnthroota(in1, size1[0], size1[1], in2, size2[0], size2[1], out)
#define d2d0nthrootd2(in1, size1, in2, out)        dnthroot1a(in1, size1[0], size1[1], in2, out)
#define d0d0nthrootd0(in1, in2)       dnthroots(in1, in2)
#define s2s2nthrootd2(in1, size1, in2, size2, out)        snthroota(in1, size1[0], size1[1], in2, size2[0], size2[1], out)
#define s2s0nthrootd2(in1, size1, in2, out)        snthroot1a(in1, size1[0], size1[1], in2, out)
#define s0s0nthrootd0(in1, in2)       snthroots(in1, in2)

#endif
