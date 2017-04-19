#include <math.h>
#include "coth.h"
#include <math.h>
#include "tanh.h"
#include "floatComplex.h"
#include "division.h"

floatComplex ccoths(floatComplex z)
{
	
	floatComplex out;
	out = crdivs(FloatComplex(1,0), ctanhs(z));
	return out;
}
