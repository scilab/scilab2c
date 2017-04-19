#include "cscd.h"

void scscda(float* in,int size,float* out)
{
  int i = 0;
  for (i = 0;i<size;++i)
  {
    out[i] = scscds(in[i]);
  }
}
