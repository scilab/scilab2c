#include "sec.h"
#include "secd.h"

void ssecda(float* in, int size, float* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = ssecds(in[i]);
  }
}
