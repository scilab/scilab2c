// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRUARTSetup(mode, baudrate, stopbits, parity)
// Function to Setup Serial Communication i.e UART or USART in ATmega16.
// 
// Parameters
//     mode : integer, from 0 to 2
//     baudrate : Enter one of the following available baudrates (2400 , 4800 , 9600 , 14400 , 19200 , 28800 , 38400 , 57600 , 768000 , 115200 , 230400 , 250000 , 1000000)
//     stopbits : integer, (0 for one stopbit) or (1 for two stopbits)
//     parity : integer, from 0 to 2
// 
// Description
//        This function Setup the UART or USART for Serial Communicaion between ATmega16 
//        and different micro controllers or between ATmega16 and Computer.   
//
//	mode can take values:
//	<itemizedlist>
//      <listitem><para>0 for Asynchronous Normal mode</para></listitem>
//      <listitem><para>1 for Asynchronous Double Speed mode</para></listitem>
//      <listitem><para>2 for Synchronous mode</para></listitem>
//      </itemizedlist>
//
//	parity can take values:
//	<itemizedlist>
//      <listitem><para>0 for parity disabled</para></listitem>
//      <listitem><para>1 for even parity</para></listitem>
//      <listitem><para>2 for odd parity</para></listitem>
//      </itemizedlist>
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
//
//Examples
//     AVRUARTSetup(0,9600,0,0); //This function will enable UART Communication for ATmega16
//                                 with 9600 as baudrate,one stop bit and parity disabled
// See also
//     AVRUARTTransmit
//     AVRUARTReceive
//
// Authors
//     Ashish Kamble
//

if(mode>=3) then
disp("Error : Invalid input argument ''mode'' in AVRUARTSetup function.");
end

if((baudrate <> 2400)&(baudrate <> 4800)&(baudrate <> 9600)&(baudrate <> 14400)&(baudrate <> 28800)&(baudrate <> 38400)&(baudrate <> 57600)&(baudrate <> 768000)&(baudrate <> 115200)&(baudrate <> 230400)&(baudrate <> 250000)& (baudrate <> 1000000)) then 
disp("Error : Invalid input argument ''baudrate'' in AVRUARTSetup function.");
end
if(stopbits>=2) then
disp("Error : Invalid input argument ''stopbits'' in AVRUARTSetup function.");
end
if(parity>=3) then
disp("Error : Invalid input argument ''parity'' in AVRUARTSetup function.");
end
endfunction
