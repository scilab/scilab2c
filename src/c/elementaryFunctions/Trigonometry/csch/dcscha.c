#include "csch.h"

void dcscha(double* in, int size, double* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = dcschs(in[i]);
  }
}
