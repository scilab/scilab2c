 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __RPIPERIPHERALLCD_H__
#define __RPIPERIPHERALLCD_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "lcd.h"

void u8RPI_lcdCharDefs(uint8 fd,uint8 index,uint8 d0,uint8 d1,uint8 d2,uint8 d3, uint8 d4,uint8 d5,uint8 d6,uint8 d7);
void u8RPI_lcdClears(uint8 fd);
void u8RPI_lcdCursorBlinks(uint8 fd,uint8 state);
void u8RPI_lcdCursors(uint8 fd,uint8 state);
void u8RPI_lcdDisplays(uint8 fd,uint8 state);
void u8RPI_lcdHomes(uint8 fd);
int8 u8RPI_lcdInits(uint8 rows,uint8 cols,uint8 bits,uint8 rs,uint8 strb,uint8 d0,uint8 d1,uint8 d2,uint8 d3,uint8 d4,uint8 d5,uint8 d6,uint8 d7);
void u8RPI_lcdPositions(uint8 fd,uint8 row,uint8 col);
void u8RPI_lcdPutchars(uint8 fd,uint8 character);
void u8RPI_lcdSendCommands(uint8 fd,uint8 cmd);
void u8RPI_lcdPutss(uint8 fd,char* msg,int size);
void u8RPI_lcdPrintfs(uint8 fd,char* data,int size);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALLCD_H__*/
