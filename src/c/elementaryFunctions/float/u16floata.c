#include "float.h"

void u16floata(uint16* x, int size, float* out) {
	int i = 0;
	for (i=0;i<size;i++) out[i] = u16floats(x[i]);
}
