// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRUARTTransmit(data)
// Function to Transmit data using UART or USART.
// Description
//        This function Tranmits data over UART or USART.The data to be transmitted can 
//        be a Char , String , Unsigned Int, Signed Int. 
//       
// Parameter
//        data : 
//             The data to be transmitted can be a Char,String,Unsigned Int,Signed Int.        
//
//Examples
//    AVRUARTTransmit("This is example");  //This function will transmit the entered string.
//                               
//See also
//     AVRUARTSetup
//     AVRUARTReceive
//
// Authors
//     Ashish Kamble
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.    
endfunction
