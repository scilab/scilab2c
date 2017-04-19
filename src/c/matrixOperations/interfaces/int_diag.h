/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Mushir
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_DIAG_H__
#define __INT_DIAG_H__



#define d0diagd0(in1)         ddiags(in1)

#define d0d0diagd0(in1,in2)   ddiags(in1)

#define d0d0diagd2(in1,in2,out)   ddiaga(in1,1,in2,out)

#define d2diagd2(in1,size,out)  if(size[0] != size[1]) { (size[0]==1) ? ddiagins(in1,size[1],out) : ddiagins(in1,size[0],out); }  else {ddiagexa(in1,size[0],size[1],0,out) ;}

#define d2d0diagd2(in1,size,in2,out)   if((size[0] != 1) && (size[1] != 1) ) { ddiagexa(in1,size[0],size[1],in2,out); } else { if(in2 != 0) {ddiagina(in1,size[0],size[1],in2,out);} else { (size[0] == 1) ? ddiagins(in1,size[1],out) : ddiagins(in1,size[0],out); };}

#define d2d0diagd0(in1,size,in2)       ddiagexs(in1,size[0],size[1],in2)



#define u80diagu80(in1)         u8diags(in1)

#define u80d0diagu80(in1,in2)   u8diags(in1)

#define u80d0diagu82(in1,in2,out)   u8diaga(in1,1,in2,out)

#define u82diagu82(in1,size,out)  if(size[0] != size[1]) { (size[0]==1) ? u8diagins(in1,size[1],out) : u8diagins(in1,size[0],out); }  else {u8diagexa(in1,size[0],size[1],0,out) ;}

#define u82d0diagu82(in1,size,in2,out)   if((size[0] != 1) && (size[1] != 1) ) { u8diagexa(in1,size[0],size[1],in2,out); } else { if(in2 != 0) {u8diagina(in1,size[0],size[1],in2,out);} else { (size[0] == 1) ? u8diagins(in1,size[1],out) : u8diagins(in1,size[0],out); };}

#define u82d0diagu80(in1,size,in2)       u8diagexs(in1,size[0],size[1],in2)

#define u160diagu160(in1)         u16diags(in1)

#define u160d0diagu160(in1,in2)   u16diags(in1)

#define u160d0diagu162(in1,in2,out)   u16diaga(in1,1,in2,out)

#define u162diagu162(in1,size,out)  if(size[0] != size[1]) { (size[0]==1) ? u16diagins(in1,size[1],out) : u16diagins(in1,size[0],out); }  else {u16diagexa(in1,size[0],size[1],0,out) ;}

#define u162d0diagu162(in1,size,in2,out)   if((size[0] != 1) && (size[1] != 1) ) { u16diagexa(in1,size[0],size[1],in2,out); } else { if(in2 != 0) {u16diagina(in1,size[0],size[1],in2,out);} else { (size[0] == 1) ? u16diagins(in1,size[1],out) : u16diagins(in1,size[0],out); };}

#define u162d0diagu160(in1,size,in2)       u16diagexs(in1,size[0],size[1],in2)



#define i80diagi80(in1)         i8diags(in1)

#define i80d0diagi80(in1,in2)   i8diags(in1)

#define i80d0diagi82(in1,in2,out)   i8diaga(in1,1,in2,out)

#define i82diagi82(in1,size,out)  if(size[0] != size[1]) { (size[0]==1) ? i8diagins(in1,size[1],out) : i8diagins(in1,size[0],out); }  else {i8diagexa(in1,size[0],size[1],0,out) ;}

#define i82d0diagi82(in1,size,in2,out)   if((size[0] != 1) && (size[1] != 1) ) { i8diagexa(in1,size[0],size[1],in2,out); } else { if(in2 != 0) {i8diagina(in1,size[0],size[1],in2,out);} else { (size[0] == 1) ? i8diagins(in1,size[1],out) : i8diagins(in1,size[0],out); };}

#define i82d0diagi80(in1,size,in2)       i8diagexs(in1,size[0],size[1],in2)

#define i160diagi160(in1)         i16diags(in1)

#define i160d0diagi160(in1,in2)   i16diags(in1)

#define i160d0diagi162(in1,in2,out)   i16diaga(in1,1,in2,out)


#define i162diagi162(in1,size,out)  if(size[0] != size[1]) { (size[0]==1) ? i16diagins(in1,size[1],out) : i16diagins(in1,size[0],out); }  else {i16diagexa(in1,size[0],size[1],0,out) ;}

#define i162d0diagi162(in1,size,in2,out)   if((size[0] != 1) && (size[1] != 1) ) { i16diagexa(in1,size[0],size[1],in2,out); } else { if(in2 != 0) {i16diagina(in1,size[0],size[1],in2,out);} else { (size[0] == 1) ? i16diagins(in1,size[1],out) : i16diagins(in1,size[0],out); };}

#define i162d0diagi160(in1,size,in2)       i16diagexs(in1,size[0],size[1],in2)



#endif /* !__INT_DIAG_H__ */
