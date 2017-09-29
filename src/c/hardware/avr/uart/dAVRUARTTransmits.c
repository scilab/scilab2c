/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ashish Kamble
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/ 
//Not Tested// 
#include "AVRPeripheralUART.h"
#include<math.h>


uint8 dAVRUARTTransmits(double data)
{ 
 //Extract integer part
 long int intpart = (long int)data;
 //Extract double part
 //double floatpart = data - (double)intpart; 
 char* str;
 int i = 0;
 while(intpart)
 {
  str[i] = (intpart%10) + '0';
  intpart = intpart/10;
  i++;
 }
 str[i]='\0';
 /*
 int j = 0;
 int k = i-1; 
 char temp;
 while(j<k)
 {
  temp = str[j];
  str[j] = str[k];
  str[k] = temp;
  j++; 
  k--;
 }
*/
 

 /*
 char* strfloat;
 floatpart = floatpart*1000000000;
 int l = 0;
 while(floatpart)
 {
  strfloat[l] = ((unsigned int)floatpart%10) + '0';
  floatpart = floatpart/10;
  l++;
 }
 while(*strfloat!='\0')
 {
  str[i+1] = strfloat[l-1];
  i++;
  l--;
 }
 */
 
 while(*str!='\0')
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = *str; // Put data into buffer, sends the data 
  str++;
 }
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (10); // Put data into buffer, sends the data 
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (13); // Put data into buffer, sends the data 
 return 0;
}
 











