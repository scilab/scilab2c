/*SCilab2C FOSSEE IIT Bombay*/

/*
** \brief Compute a multiplication for uint16 matrixes.
** \param in1 : input matrix.
** \param lines1 : lines of in1 matrix.
** \param columns1 : columns of in1 matrix.
** \param in2 : input arry.
** \param lines2 : lines of in2 matrix.
** \param columns2 : columns of in2 matrix.
** \param out : Matrix that contains the multiplication in1 * in2.
*/

// dgemm function of lapack library does not support uint8,uint16,int8 and int16 datatype so removed

#include "matrixMultiplication.h"

void u16mulma(uint16 *in1,int lines1,int columns1,
             uint16 *in2,int lines2,int columns2,
             uint16 *out)
{

  /* Do Not Use Any BLAS Function*/
  int i = 0;
  int k = 0;
  uint16 accu = 0;
  
  /* How to convert 2 index matrixes to  one.
  ** #define in1(a,b) in1[a+b*lines1]
  ** #define in2(c,d) in2[c+d*lines2]
  */
  for(i=0;i < lines1 * columns2; ++i)
  {  
    accu = 0;
    for(k=0;k < columns1; ++k)
    {  
      accu += in1[i % lines1 + k * lines1] * in2[k + (i / lines1) * lines2];

    }
    out[i] = accu;
  
  }

}
