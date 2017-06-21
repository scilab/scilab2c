// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function data = RPI_SerialGetChar(fd)
// Function to read data from specified serial port 
//
// Calling Sequence
//	   RPI_SerialGetCharfd)
//
// Parameters
//	   fd: file descriptor returned when serial port was opened
// Description
//     This functions reads character form specified port. In case no 
//	   character is available, -1 is returned after 10 sec.
// Examples
//		serial = RPI_SetupSerial("/dev/ttyAMA0", 9600);
//		RPI_SerialFlush(serial);
//		bytes = RPI_SerialDataAvail(serial);
//	
// See also
//     RPI_SetupSerial RPI_SendData
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.
endfunction
