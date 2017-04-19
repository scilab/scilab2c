#include "float.h"

void u8floata(uint8* x, int size, float* out) {
	int i = 0;
	for (i=0;i<size;i++) out[i] = u8floats(x[i]);
}
