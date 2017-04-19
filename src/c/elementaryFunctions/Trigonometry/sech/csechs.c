#include "sech.h"
#include "sec.h"
#include <math.h>
#include "cos.h"
#include "cosh.h"
#include "floatComplex.h"
#include "division.h"

floatComplex csechs(floatComplex z)
{
	
	floatComplex out;
	out = crdivs(FloatComplex(1,0),ccoshs(z));
	return out;
}
