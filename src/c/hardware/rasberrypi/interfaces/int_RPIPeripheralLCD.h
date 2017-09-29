/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author:  Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALLCD_H__
#define __INT_RPIPERIPHERALLCD_H__

#include "types.h"
#include "RPIPeripheralLCD.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80u80u80u80u80u80u80u80u80u80RPI_lcdCharDef(fd,index,d0,d1,d2,d3,d4,d5,d6,d7) u8RPI_lcdCharDefs(fd,index,d0,d1,d2,d3,d4,d5,d6,d7);
#define u80d0d0d0d0d0d0d0d0d0RPI_lcdCharDef(fd,index,d0,d1,d2,d3,d4,d5,d6,d7) u8RPI_lcdCharDefs(fd,index,d0,d1,d2,d3,d4,d5,d6,d7);
#define d0d0d0d0d0d0d0d0d0d0RPI_lcdCharDef(fd,index,d0,d1,d2,d3,d4,d5,d6,d7) u8RPI_lcdCharDefs(fd,index,d0,d1,d2,d3,d4,d5,d6,d7);

#define u80RPI_lcdClear(fd) u8RPI_lcdClears(fd);
#define d0RPI_lcdClear(fd) u8RPI_lcdClears(fd);

#define u80u80RPI_lcdCursorBlink(fd,state) u8RPI_lcdCursorBlinks(fd,state);
#define u80d0RPI_lcdCursorBlink(fd,state) u8RPI_lcdCursorBlinks(fd,state);
#define d0d0RPI_lcdCursorBlink(fd,state) u8RPI_lcdCursorBlinks(fd,state);

#define u80u80RPI_lcdCursor(fd,state) u8RPI_lcdCursors(fd,state);
#define u80d0RPI_lcdCursor(fd,state) u8RPI_lcdCursors(fd,state);
#define d0d0RPI_lcdCursor(fd,state) u8RPI_lcdCursors(fd,state);

#define u80u80RPI_lcdDisplay(fd,state) u8RPI_lcdDisplays(fd,state);
#define u80d0RPI_lcdDisplay(fd,state) u8RPI_lcdDisplays(fd,state);
#define d0d0RPI_lcdDisplay(fd,state) u8RPI_lcdDisplays(fd,state);

#define u80RPI_lcdHome(fd) u8RPI_lcdHomes(fd);
#define d0RPI_lcdHome(fd) u8RPI_lcdHomes(fd);

#define u80u80u80u80u80u80u80u80u80u80u80u80u80RPI_lcdIniti80(rows,cols,bits,rs,strb,d0,d1,d2,d3,d4,d5,d6,d7) u8RPI_lcdInits(rows,cols,bits,rs,strb,d0,d1,d2,d3,d4,d5,d6,d7);
#define d0d0d0d0d0d0d0d0d0d0d0d0d0RPI_lcdIniti80(rows,cols,bits,rs,strb,d0,d1,d2,d3,d4,d5,d6,d7) u8RPI_lcdInits(rows,cols,bits,rs,strb,d0,d1,d2,d3,d4,d5,d6,d7);

#define u80u80u80RPI_lcdPosition(fd,row,col) u8RPI_lcdPositions(fd,row,col);
#define u80d0d0RPI_lcdPosition(fd,row,col) u8RPI_lcdPositions(fd,row,col);
#define d0d0d0RPI_lcdPosition(fd,row,col) u8RPI_lcdPositions(fd,row,col);

#define u80u80RPI_lcdPutchar(fd,char) u8RPI_lcdPutchars(fd,char);
#define u80d0RPI_lcdPutchar(fd,char) u8RPI_lcdPutchars(fd,char);
#define d0d0RPI_lcdPutchar(fd,char) u8RPI_lcdPutchars(fd,char);

#define u80u80RPI_lcdSendCommand(fd,cmd) u8RPI_lcdSendCommands(fd,cmd);
#define u80d0RPI_lcdSendCommand(fd,cmd) u8RPI_lcdSendCommands(fd,cmd);
#define d0d0RPI_lcdSendCommand(fd,cmd) u8RPI_lcdSendCommands(fd,cmd);

#define u80g2RPI_lcdPuts(fd,msg,size) u8RPI_lcdPutss(fd,msg,size[1]);;
#define d0g2RPI_lcdPuts(fd,msg,size) u8RPI_lcdPutss(fd,msg,size[1]);;

#define u80g2RPI_lcdPrintf(fd,data,size) u8RPI_lcdPrintfs(fd,data,size[1]);
#define d0g2RPI_lcdPrintf(fd,data,size) u8RPI_lcdPrintfs(fd,data,size[1]);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALLCD_H__ */
