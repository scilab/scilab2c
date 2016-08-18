function data = RPI_SerialGetChar(fd)
// Function to read data from specified serial port 
//
// Calling Sequence
//	   RPI_SerialGetChar(fd)
//
// Parameters
//	   fd: file descriptor returned when serial port was opened
// Description
//     This functions reads character form specified port. In case no 
//	   character is available, -1 is returned after 10 sec.
// Examples
//		serial = RPI_SetupSerial("/dev/ttyAMA0", 9600);
//		bytes = RPI_SerialDataAvail(serial);
//		if(bytes>0)	
//			data = RPI_SerialGetChar(serial)  //Reads single character
//		end
// See also
//     RPI_SetupSerial RPI_SendData
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
data = 0;
endfunction
