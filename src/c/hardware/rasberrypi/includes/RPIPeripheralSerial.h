 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author: Siddhesh Wani, Jorawar Singh
=======
 Author: Siddhesh Wani
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __RPIPERIPHERALSERIAL_H__
#define __RPIPERIPHERALSERIAL_H__

<<<<<<< HEAD
=======
#include "types.h"
#include "wiringSerial.h"

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#ifdef  __cplusplus
extern "C" {
#endif

<<<<<<< HEAD
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
=======
int u8RPISerialSetups(char* port, int baudrate);
void u8RPISerialCloses(int fd);

void u8RPISerialSendChars(int fd, uint8 data);
void u8RPISerialSendDatas(int fd, uint8 data);
void i8RPISerialSendDatas(int fd, int8 data);
void u16RPISerialSendDatas(int fd, uint16 data);
void i16RPISerialSendDatas(int fd, int16 data);
void sRPISerialSendDatas(int fd, float data);
void dRPISerialSendDatas(int fd, double data);
void u8RPISerialSendDataa(int fd, uint8* data, int size);
void i8RPISerialSendDataa(int fd, int8* data, int size);
void u16RPISerialSendDataa(int fd, uint16* data, int size);
void i16RPISerialSendDataa(int fd, int16* data, int size);
void sRPISerialSendDataa(int fd, float* data, int size);
void dRPISerialSendDataa(int fd, double* data, int size);
void gRPISerialSendDatas(int fd, uint8* data, int size);

int16 i16RPISerialDataAvails(int fd);
int16 i16RPISerialGetChars(int fd);

void u8RPISerialFlushs(int fd);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALSERIAL_H__*/
