// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRTimerSetup(timer,prescaler,clock_source)
//Function to setup Timers in ATmega16
<<<<<<< HEAD
//
//Parameters:
//     timer : integer, from 0 to 2
//     prescaler : integer.
//     clock_source : integer, 0 (for internal) or 1 (for external)
//
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
//Descrpition:
//      This function tells the micro controller which clock source you will be using.
//      The timer value and prescaler value passed in this function setup the timer as per
//      your requirement.
//
<<<<<<< HEAD
//	timer can take values-
//	<itemizedlist>
//      <listitem><para>0   -> for timer0</para></listitem>
//      <listitem><para>1   -> for timer1</para></listitem>
//      <listitem><para>2   -> for timer2</para></listitem>
//      </itemizedlist>
//
//	prescaler can take values-
//	<itemizedlist>
//	<listitem><para>1 for no prescaling i.e clock will run at max 16Hz frequency</para></listitem>
//      <listitem><para>8 for prescaling clock by 8 i.e new clock frequency will be (clk/8)</para></listitem>
//      <listitem><para>64 for prescaling clock by 64 i.e new clock frequency will be (clk/64)</para></listitem>
//      <listitem><para>256 for prescaling clock by 256 i.e new clock frequency will be (clk/256)</para></listitem>
//      <listitem><para>1024 for prescaling clock by 1024 i.e new clock frequency will be (clk/1024)</para></listitem>
//      </itemizedlist>
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
//
//Example
//    AVRTimerSetup(0,64,0);  //This function will select timer0 with timer running as per internal clock source and prescaled by 64.
=======
//Parameters:
//     timer : It is an integer value. 
//             0 to setup timer0
//             1 to setup timer1
//             2 to setup timer2   
//     prescaler : It is an integer value.
//                 1 for no prescaling i.e clock will run at max 16Hz frequency
//                 8 for prescaling clock by 8 i.e new clock frequency will be (clk/8)
//                 64 for prescaling clock by 64 i.e new clock frequency will be (clk/64)
//                 256 for prescaling clock by 256 i.e new clock frequency will be (clk/256)
//                 1024 for prescaling clock by 1024 i.e new clock frequency will be (clk/1024)
//     clock_source : It is an integer value.
//                    0 if you are using internal clock source       
//                    1 if you are using external clock source
//Example
//    AVRTimerSetup(0,64,0);  //This function will select timer0 with timer running as per
//                            internal clock source and prescaled by 64.     
//                           
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
//See also
//     AVRGetTimerValues
//
//Authors
//     Ashish Kamble
//
<<<<<<< HEAD
=======
//This is curretly dummy function. It provides no functionality but is required 
//for providing support for generating C code for AVR.
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

if(timer>=3) then
disp("Error : Invalid input argument ''timer'' in AVRTimerSetup function.");
end

if(~((prescaler==1)|(prescaler==8)|(prescaler==64)|(prescaler==256)|(prescaler==1024))) then 
disp("Error : Invalid input argument ''prescaler'' in AVRTimerSetup function.");
end

if(clock_source>=2) then
disp("Error : Invalid input argument ''clock_source'' in AVRTimerSetup function.");
end
endfunction
