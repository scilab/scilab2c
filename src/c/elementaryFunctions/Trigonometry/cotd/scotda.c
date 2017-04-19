
#include "cotd.h"

void scotda(float* in, int size, float* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = scosds(in[i]);
  }
}
