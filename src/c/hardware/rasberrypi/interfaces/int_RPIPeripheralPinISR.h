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
#ifndef __INT_RPIPERIPHERALPINISR_H__
#define __INT_RPIPERIPHERALPINISR_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_PinISR(pin,edge,funname) i16RPIPinISRs((uint8)pin,(uint8)edge,funname)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_RPIPERIPHERALPINISR_H__*/
