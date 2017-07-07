<<<<<<< HEAD
/* Copyright (C) 2016 - IIT Bombay - FOSSEE
=======
 /* Copyright (C) 2016 - IIT Bombay - FOSSEE
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author:  Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

=======
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#ifndef __INT_RPIPERIPHERALPWM_H__
#define __INT_RPIPERIPHERALPWM_H__

#include "types.h"
<<<<<<< HEAD
#include "RPIPeripheralPWM.h"
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
extern "C" {
#endif

<<<<<<< HEAD
#define u80u160RPI_pwmWrite(pin,value) u8RPI_pwmWrites(pin,value);
#define u320RPI_pwmRange(value) u32RPI_pwmRanges(value);
#define g2RPI_pwmMode(mode) gRPI_pwmModea(mode);
#define u160RPI_pwmClock(divisor) u16RPI_pwmClocks(divisor);
#define u80u160RPI_pwmToneWrite(pin,value) u8RPI_pwmToneWrites(pin,value);
=======
#define RPI_HardPWMWrite(pin,value)			u8RPIHardPWMWrites((uint8)pin,(uint16)value)
#define RPI_HardPWMSetRange(value)			u8RPIHardPWMSetRanges((uint16)value)
#define RPI_HardPWMSetMode(mode)			u8RPIHardPWMSetModes((uint8)mode)	
#define RPI_HardPWMSetClock(clk_divisor)	u8RPIHardPWMSetClocks((uint16)clk_divisor)	
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
} /* extern "C" */
#endif

<<<<<<< HEAD
#endif /* !__INT_RPIPERIPHERALPWM_H__ */
=======
#endif /*__INT_RPIPERIPHERALPWM_H__*/
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
