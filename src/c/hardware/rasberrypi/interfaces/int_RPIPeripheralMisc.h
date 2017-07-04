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

#ifndef __INT_RPIPERIPHERALMISC_H__
#define __INT_RPIPERIPHERALMISC_H__

#include "types.h"
#include "RPIPeripheralMisc.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_boardRevu80() RPI_boardRev();
#define u80u80RPI_padDrive(group,strength) u8RPI_padDrives(group,strength);
#define u160RPI_sn3218Setupi80(pinBase) u16RPI_sn3218Setups(pinBase);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALMISC_H__ */
