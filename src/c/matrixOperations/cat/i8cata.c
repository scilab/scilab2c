/* Scilab2C FOSSEE IIT BOMBAY*/
#include "cat.h"
/* From scilab help cat then the concatenation is done according to the rows
A1 = [1 2 3;4 5 6];
A2 = [7 8 9;10 11 12];
y = cat(1,A1,A2);
output => y = [1 2 3; 4 5 6;7 8 9;10 11 12]
*/

void i8rowcata(int8 *in1,int lines1,int columns1,int8 *in2,int lines2,int columns2,int8* out)
{
 int i = 0;
 int j = 0;
 for(i = 0;i < columns1 && i < columns2; ++i)
  {
    for(j = 0;j < lines1; ++j)
    {
       out[i*(lines1 + lines2) + j] = in1[i*lines1 + j];
    }
    for(j = 0;j < lines2; ++j)
      {
        out[i*(lines1 + lines2) + lines1 + j] = in2[i*lines2 + j];
      }

  }
}
  /* From scilab help cat then the concatenation is done according to the rows
A1 = [1 2 3;4 5 6];
A2 = [7 8 9;10 11 12];
y = cat(2,A1,A2);
output => y = [1 2 3 7 8 9; 4 5 6 10 11 12]
*/

void i8columncata(int8 *in1,int lines1,int columns1,int8 *in2,int lines2,int columns2,int8* out)
   {
     int i = 0;
     for(i = 0; i < lines1 * columns1;++i)
      {
          out[i] = in1[i];
 
      }
      for(i = 0;i < lines2 * columns2;++i)
      {
        
        out[i + lines1 * columns2] = in2[i];

      }
  
   }

