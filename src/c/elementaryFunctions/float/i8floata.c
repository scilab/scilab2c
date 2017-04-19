#include "float.h"

void i8floata(int8* x, int size, float* out) {
	int i = 0;
	for (i=0;i<size;i++) out[i] = i8floats(x[i]);
}
