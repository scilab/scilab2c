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

#ifndef __INT_RPIPERIPHERALPIGLOW_H__
#define __INT_RPIPERIPHERALPIGLOW_H__

#include "types.h"
#include "RPIPeripheralPiGlow.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80RPI_piGlowSetup(clear) u8RPI_piGlowSetups(clear);
#define u80u80u80RPI_piGlow1(leg,ring,intensity) u8RPI_piGlow1s(leg,ring,intensity);
#define u80u80RPI_piGlowLeg(leg,intensity) u8RPI_piGlowLegs(leg,intensity);
#define u80u80RPI_piGlowRing(ring,intensity) u8RPI_piGlowRings(ring,intensity);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALPIGLOW_H__ */
