#include "sec.h"
#include "cos.h"
#include <math.h>
#include "floatComplex.h"
#include "division.h"

floatComplex csecs(floatComplex z)
{
	
	floatComplex out;
	out = crdivs(FloatComplex(1,0),ccoss(z));
	return out;
}
