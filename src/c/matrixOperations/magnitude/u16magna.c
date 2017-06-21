/* SCilab2C FOSSEE IIT BOMBAY */



#include "matrixMagnitude.h"

uint16 u16magna(uint16* in, int rows, int cols){
	int i=0,j=0;
	uint16  out=0, colSum=0;
	
	/* Other method : 
		drowsuma(in,rows,cols,temp);
		out=max(temp,cols);
	but we have to malloc a array */
		
	if ((rows==1)||(cols==1)){
		for(i=0;i<cols*rows;i++){
			out += dmagns(in[i]);
		}
	}
	else{		
		for(i=0;i<cols;i++){
			colSum = 0;
			for(j=0;j<rows;j++){
				colSum += dmagns(in[i*rows+j]);
			}
			if (colSum>out) out=colSum;
		}
	}
	return out;
}


