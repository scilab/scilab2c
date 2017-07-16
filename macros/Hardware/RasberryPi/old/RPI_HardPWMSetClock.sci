// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_HardPWMSetClock(clock_divisor)
// Function to set PWM clock. PWM clock frequency is 19.2MHz, which can be reduced 
// using suitable clock_divisor (1 to 2048, powers of 2)
//
// Calling Sequence
//	   RPI_HardPWMSetClock(clock_divisor) 
//
// Parameters
//		clock_divisor: Value can be from 1 to 2048, powers of 2. 
// Description
//		This function decides pwm clock.  
//		PWM frequency = (PWM Clock frequency/Clock divisor/range) 
//				PWM clock frequency = 19.2 MHz
//				clock divisor is setup using RPI_HardPWMSetClock
//				range is setup using RPI_HardPWMSetRange 
// Examples
//	
// See also
//     RPI_HardPWMSetWrite RPI_HardPWMSetRange
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
endfunction
