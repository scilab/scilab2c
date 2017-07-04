/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author:  Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALPINMAP_H__
#define __INT_RPIPERIPHERALPINMAP_H__

#include "types.h"
#include "RPIPeripheralPinMap.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80RPI_physToGpioi80(pin) u8RPI_physToGpios(pin);
#define u80RPI_wpiToGpioi80(pin) u8RPI_wpiToGpios(pin);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALPINMAP_H__ */
