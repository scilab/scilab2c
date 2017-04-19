#include "sec.h"

void sseca(float* in, int size, float* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = ssecs(in[i]);
  }
}
