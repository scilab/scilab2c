#include <math.h>
#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"
#include "csc.h"
#include "floatComplex.h"
#include "division.h"

floatComplex ccscs(floatComplex z)
{
	
	floatComplex out;
	out = crdivs(FloatComplex(1,0),csins(z));
	return out;
}
