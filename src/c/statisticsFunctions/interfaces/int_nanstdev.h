 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_NANSTDEV_H__
#define __INT_NANSTDEV_H__

#define d2nanstdevd0(in1, size)                            dnanstdeva(in1,size[0]* size[1])
#define d2g2nanstdevd2(in1, size1, in2, size2, out)        (in2[0]=='r') ? dnanstdevrowa(in1, size1[0], size1[1], out) : dnanstdevcola(in1, size1[0] , size1[1], out)

#define s2nanstdevs0(in1, size)                            snanstdeva(in1,size[0]* size[1])
#define s2g2nanstdevs2(in1, size1, in2, size2, out)        (in2[0]=='r') ? snanstdevrowa(in1, size1[0], size1[1], out) : snanstdevcola(in1, size1[0] , size1[1], out)


#endif
