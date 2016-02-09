function RPI_DelayMilli(time)
// Function to insert some delay in code execution. 
//
// Calling Sequence
//     RPI_DelayMilli(time)
//
// Parameters
//     time: time(milliseconds) for which execution is to be delayed    
//
// Description
//     this function can be used for insertig execution delays. 'time' should be
//     specified in milliseconds. If more resolution is required, use 'RPI_DelayMicro'
//     for inserting delay in microseconds. 
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
