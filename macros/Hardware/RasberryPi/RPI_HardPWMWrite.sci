function RPI_HardPWMWrite(pin,value)
// Function to change pwm duty on specified pin. Hardware PWM is available 
// only on pin 12. So, only '12' should be provided as pin 
//
// Calling Sequence
//	   RPI_HardPWMWrite(12,512) //Value must be smaller than the range set
//									using RPI_HARDPWMSetRange
//
// Parameters
//		pin: pin no on which pwm value is to be changed. Currently only 12 is allowed
//		value: pwm value for given pin. This must be less than range value set 
// Description
//		This function changes pwm duty on specified pin. As for RPi, only one pin 
//		(pin 12) is available for hardware PWM. 
//		PWM frequency = (PWM Clock frequency/Clock divisor/range) 
//				PWM clock frequency = 19.2 MHz
//				clock divisor is setup using RPI_HardPWMSetClock
//				range is setup using RPI_HardPWMSetRange 
//		Actual PWM duty = value/range
// Examples
//	
// See also
//     RPI_HardPWMSetClock RPI_HardPWMSetRange
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
endfunction
