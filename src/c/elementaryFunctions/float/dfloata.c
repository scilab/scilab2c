#include "float.h"

void dfloata(double* x, int size, float* out) {
	int i = 0;
	for (i=0;i<size;i++)
		out[i] = dfloats(x[i]);
}
