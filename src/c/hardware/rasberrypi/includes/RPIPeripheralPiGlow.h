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
#ifndef __RPIPERIPHERALPIGLOW_H__
#define __RPIPERIPHERALPIGLOW_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "piGlow.h"

void u8RPI_piGlowSetups(uint8 clear);
void u8RPI_piGlow1s(uint8 leg,uint8 ring,uint8 intensity);
void u8RPI_piGlowLegs(uint8 leg,uint8 intensity);
void u8RPI_piGlowRings(uint8 ring,uint8 intensity);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALPIGLOW_H__*/
