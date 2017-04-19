#include "csch.h"

void scscha(float* in, int size, float* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = scschs(in[i]);
  }
}
