 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_PMODULO_H__
#define __INT_PMODULO_H__

#define d0d0pmodulod0(in1, in2)        dpmodulos(in1,in2)
#define d2d2pmodulod2(in1, size1, in2, size2, out)        dpmoduloa(in1,size1[0]*size1[1],in2, out)

#define s0s0pmodulos0(in1, in2)        spmodulos(in1,in2)
#define s2s2pmodulos2(in1, size1, in2, size2, out)        spmoduloa(in1,size1[0]*size1[1],in2, out)

#define i160i160pmoduloi160(in1, in2)        i16pmodulos(in1,in2)
#define i162i162pmoduloi162(in1, size1, in2, size2, out)        i16pmoduloa(in1,size1[0]*size1[1],in2, out)


#endif
