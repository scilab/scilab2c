// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_pinModeAlt(pin,ALTMode)
// Function to set the current mode of pin
//
// Calling Sequence
//  RPI_pinModeAlt(pin,ALTMode)
//
// Parameters
//  pin    : The pin number to read the voltage from. Numbering sequence to be followed as initiated using RPI_pinNumbering function.
//  ALTMode: integer, from 0 to 7
//
// Description
//    This function sets the mode of the pin to either of the general GPIO (also set through RPI_pinMode function) or the alternatives available (not accessible through RPI_pinMode function).
//
//  ALTMode can take the following values:
//  <itemizedlist>
//  <listitem>0 : Input</listitem>
//  <listitem>1 : Output</listitem>
//  <listitem>2 : ALT5</listitem>
//  <listitem>3 : ALT4</listitem>
//  <listitem>4 : ALT0</listitem>
//  <listitem>5 : ALT1</listitem>
//  <listitem>6 : ALT2</listitem>
//  <listitem>7 : ALT3</listitem>
//  </itemizedlist>
//
//The list of Alternate functions of all the pins can be found on page 102 of the official documentation: https://www.raspberrypi.org/documentation/hardware/raspberrypi/bcm2835/BCM2835-ARM-Peripherals.pdf
//
// Examples
//  RPI_pinModeAlt(1,2)
// See also
//  RPI_pinMode, RPI_pinNumbering, RPI_getAlt
//
// Authors
//  Jorawar Singh
//
// Bibliography
//  http://wiringpi.com/reference/

    commande="pMA#2#"+string(pin)+"#"+string(ALTMode)+"#";
    if getos()=="Linux" then
        unix_w("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    elseif getos()=="Windows" then
        RPI_winR=dos("python -c ""import socket;s=socket.socket();s.connect((''"+RPI_piAdress+"'',9077));s.send(''"+commande+"'');print(s.recv(1024));s.close()""");
    end
endfunction
