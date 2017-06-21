 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Shamik Guha
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_dec2bin_H__
#define __INT_dec2bin_H__

 #ifdef  __cplusplus
 extern "C" {
 #endif

#define d0dec2bind2(in,out)	ddec2bins(in,0,out)
#define i80dec2bini82(in,out)	i8dec2bins(in,0,out)
#define i160dec2bini162(in,out)	i16dec2bins(in,0,out)
#define u80dec2binu82(in,out)	u8dec2bins(in,0,out)
#define u160dec2binu162(in,out)	u16dec2bins(in,0,out)

#define d2dec2bind2(in,size,out) ddec2bina(in,size[0]*size[1],0,out)
#define i82dec2bini82(in,size,out) i8dec2bina(in,size[0]*size[1],0,out)
#define i162dec2bini162(in,size,out) i16dec2bina(in,size[0]*size[1],0,out)
#define u82dec2binu82(in,size,out) u8dec2bina(in,size[0]*size[1],0,out)
#define u162dec2binu162(in,size,out) u16dec2bina(in,size[0]*size[1],0,out)

#define d0d0dec2bind2(in,n,out)	    ddec2bins(in,n,out)
#define i80d0dec2bini82(in,n,out)   i8dec2bins(in,n,out)
#define i160d0dec2bini162(in,n,out) i16dec2bins(in,n,out)
#define u80d0dec2binu82(in,n,out)   u8dec2bins(in,n,out)
#define u160d0dec2binu162(in,n,out) u16dec2bins(in,n,out)

#define d2d0dec2bind2(in,size,n,out) ddec2bina(in,size[0]*size[1],n,out)
#define i82d0dec2bini82(in,size,n,out) i8dec2bina(in,size[0]*size[1],n,out)
#define i162d0dec2bini162(in,size,n,out) i16dec2bina(in,size[0]*size[1],n,out)
#define u82d0dec2binu82(in,size,n,out) u8dec2bina(in,size[0]*size[1],n,out)
#define u162d0dec2binu162(in,size,n,out) u16dec2bina(in,size[0]*size[1],n,out)


 #ifdef  __cplusplus
 } /* extern "C" */
 #endif

#endif /*__INT_dec2bin_H__*/
