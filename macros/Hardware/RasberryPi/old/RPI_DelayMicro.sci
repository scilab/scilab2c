// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_DelayMicro(time)
// Function to insert some delay in code execution. 
//
// Calling Sequence
//     RPI_DelayMicro(time)
//
// Parameters
//     time: time(microseconds) for which execution is to be delayed    
//
// Description
//     this function can be used for insertig execution delays. 'time' should be
//     specified in microseconds.'time' should be between (1-65536).
//     Note: Delay inserted by this function is not accurate, but depedent on 
//     operating system, other running tasks etc.
// 
// Examples
//     RPI_DelayMilli(100) //This will delay the execution of next code by 100 ms.
//
// See also
//     RPI_DelayMicro
//
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
