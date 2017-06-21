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
 
 
#ifndef __INT_CMD_DIGITAL_OUT_H__
#define __INT_CMD_DIGITAL_OUT_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0d0cmd_digital_out(in1,in2,in3) u8cmd_digital_outs((uint8)in1,\
						(uint8)in2,(uint8)in3)	

//Required when input from one pin is directed to other output pin.
#define d0d0u80cmd_digital_out(in1,in2,in3) u8cmd_digital_outs((uint8)in1,\
						(uint8)in2, (uint8)in3)	


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __INT_CMD_DIGITAL_OUT_H__ */
