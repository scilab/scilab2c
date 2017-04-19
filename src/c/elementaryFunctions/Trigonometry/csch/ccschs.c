#include "csch.h"
#include "sinh.h"
#include "sin.h"
#include <math.h>
#include "floatComplex.h"
#include "division.h"

floatComplex ccschs(floatComplex z)
{
	
	floatComplex out;
	out = crdivs(FloatComplex(1,0),csinhs(z));
	return out;
}
