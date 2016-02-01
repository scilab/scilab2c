/* Scilab2C FOSSEE IITB */

#ifndef __INT_BITCMP_H__
#define __INT_BITCMP_H__


#define u80d0bitcmpu80(in1,in2) u8bitcmps(in1,in2)

#define u82d0bitcmpu82(in1,size1,in2,out) u8bitcmpa(in1,in2,size1[0]*size1[1],out)

#define u160d0bitcmpu160(in1,in2) u16bitcmps(in1,in2)

#define u162d0bitcmpu162(in1,size1,in2,out) u16bitcmpa(in1,in2,size1[0]*size1[1],out)


#endif 
