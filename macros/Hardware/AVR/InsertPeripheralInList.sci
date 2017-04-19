// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function InsertPeripheralInList(Peripheral,PeripheralListFile)
// -----------------------------------------------------------------
// Insert input peripheral in peripherals' list
//
// Input data:
//    Peripheral: Peripheral of type 'list' to be instertd in list
//    PeripheralListFile: Name of file containing list of peripheral used   
//
// Output data:
//    None 
//
// Author: Siddhesh Wani  
// -----------------------------------------------------------------

load(PeripheralListFile,'PheripheralList');

endfunction
