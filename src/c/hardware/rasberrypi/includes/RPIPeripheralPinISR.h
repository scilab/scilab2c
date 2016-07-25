 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __RPIPERIPHERALPINISR_H__
#define __RPIPERIPHERALPINISR_H__


#ifdef  __cplusplus
extern "C" {
#endif

int16 i16RPIPinISRs(uint8 pin, uint8 edgetype, void (*ISRFunction));

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALPINISR_H__*/
