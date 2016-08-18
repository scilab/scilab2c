function RPI_HardPWMSetRange(range_val)
// Function to set range value for PWM. Range value along with clock divisor
// decides pwm frequency. Range value must be less than 1024
//
// Calling Sequence
//	   RPI_HardPWMSetRange(range_val) 
//
// Parameters
//		range_val: range for pwm 
// Description
//		This function decides range for pwm.  
//		PWM frequency = (PWM Clock frequency/Clock divisor/range) 
//				PWM clock frequency = 19.2 MHz
//				clock divisor is setup using RPI_HardPWMSetClock
//				range is setup using RPI_HardPWMSetRange 
// Examples
//	
// See also
//     RPI_HardPWMSetClock RPI_HardPWMWrite
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
endfunction
