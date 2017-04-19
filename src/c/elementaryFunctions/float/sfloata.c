#include "float.h"

void sfloata(float* x, int size, float* out) {
	int i = 0;
	for (i=0;i<size;i++)
		out[i] = sfloats(x[i]);
}
