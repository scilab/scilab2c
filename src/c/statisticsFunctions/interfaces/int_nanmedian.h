 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_NANMEDIAN_H__
#define __INT_NANMEDIAN_H__

#define d2nanmediand0(in1, size)                            dnanmediana(in1,size[0]* size[1])
#define d2g2nanmediand2(in1, size1, in2, size2, out)        (in2[0]=='r') ? dnanmedianrowa(in1, size1[0], size1[1], out) : dnanmediancola(in1, size1[0] , size1[1], out)

#define s2nanmedians0(in1, size)                            snanmediana(in1,size[0]* size[1])
#define s2g2nanmedians2(in1, size1, in2, size2, out)        (in2[0]=='r') ? snanmedianrowa(in1, size1[0], size1[1], out) : snanmediancola(in1, size1[0] , size1[1], out)

#define z2nanmedianz0(in1, size)                            znanmediana(in1,size[0]* size[1])
#define z2g2nanmedianz2(in1, size1, in2, size2, out)        (in2[0]=='r') ? znanmedianrowa(in1, size1[0], size1[1], out) : znanmediancola(in1, size1[0] , size1[1], out)


#endif
