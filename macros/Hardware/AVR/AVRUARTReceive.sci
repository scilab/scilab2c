// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function received = AVRUARTReceive()
// Function to Receive Char value send to ATmega16 using UART or USART.
// Description
//        This function Receives Char as 8 bit value.This value is stored in UDR at receiving       
//        end.
//
//Examples
//    state = AVRUARTReceive(); //This function will Receive char and return the entire value
//                               
//See also
//     AVRUARTSetup
//     AVRUARTTransmit
//
// Authors
//     Ashish Kamble
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
received = 0; // received has been initialised to avoid runtime error.
endfunction
