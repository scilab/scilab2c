/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani, Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __RPIPERIPHERALMISC_H__
#define __RPIPERIPHERALMISC_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "sn3218.h"

uint8 RPI_boardRev();
void u8RPI_padDrives(uint8 group,uint8 strength);
int8 u16RPI_sn3218Setups(uint16 pinBase);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALMISC_H__*/
