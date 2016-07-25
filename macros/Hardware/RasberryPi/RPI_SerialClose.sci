function RPI_SerialClose(fd)
// Function to close serial port specified by file descriptor. 
//
// Calling Sequence
//	   RPI_SerialClose(fd)
//
// Parameters
//	   fd : file descriptor for opened port
// Description
//     This functions closes the specified serial port 
// Examples
//     serial1 = RPI_SerialSetup('/dev/ttyAMA0',9600) //opens port 'USBtty0'
//	   RPI_SerialClose(serial1)
// See also
//     RPI_SerialOpen RPI_SerialSendChar
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
