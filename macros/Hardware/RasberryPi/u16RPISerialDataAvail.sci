function bytes = RPI_SerialDataAvail(fd)
// Function to get number of data bytes available on serial port specified by
// file descriptor
// Calling Sequence
//	   RPI_SerialDataAvail(fd)
//
// Parameters
//	   fd : file descriptor for already opened serial port
// Description
//     This functions returns number of characters available to read, 
//	   otherwise reads -1 in case of error. This function can be used to check
//	   new data is available on serial port
// Examples
//	    serial = RPI_SerialOpen("/dev/ttyAMA0", 9600);
//		charsToRead = RPI_SerialDataAvail(serial); 
// See also
//     RPI_SerialOpen	RPI_SerialGetChar
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

bytes = 0;

endfunction