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
#ifndef __RPIPERIPHERALSERIAL_H__
#define __RPIPERIPHERALSERIAL_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "wiringSerial.h"

int8 gRPI_serialOpena(char* device,int size,uint32 baud);
void u8RPI_serialCloses(uint8 fd);
uint8 u8RPI_serialDataAvails(uint8 fd);
void u8RPI_serialFlushs(uint8 fd);
void u8RPI_serialGetchars(uint8 fd,char* out);
void u8RPI_serialPrintfs(uint8 fd,char* msg,int size);
void u8RPI_serialPutchars(uint8 fd,uint8 character);
void u8RPI_serialPutss(uint8 fd,char* character,int size);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALSERIAL_H__*/
