#include "float.h"

void i16floata(int16* x, int size, float* out) {
	int i = 0;
	for (i=0;i<size;i++) out[i] = i16floats(x[i]);
}
