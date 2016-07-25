function fd = RPI_SerialSetup(port, baudrate)
// Function to setup serial port. 
//
// Calling Sequence
//	   RPI_SerialSetup(port, baudrate)
//
// Parameters
//     port : port of RPi to be used (eg. ) 
//     direction : direction to be set for pin (0 -> INPUT, 1 -> OUTPUT)
//	   fd : file descriptor for opened port, -1 for error
// Description
//     This functions opens the specified serial port and returns file descriptor
//	   for the same 
// Examples
//     serial1 = RPI_SerialSetup('/dev/ttyAMA0',9600) //opens port 'USBtty0'
//
// See also
//     RPI_SerialClose RPI_SerialSendChar
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
fd = 0;
endfunction
