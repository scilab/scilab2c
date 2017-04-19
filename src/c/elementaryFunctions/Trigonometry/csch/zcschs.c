#include "csch.h"
#include "sinh.h"
#include "sin.h"
#include <math.h>
#include "doubleComplex.h"
#include "division.h"

doubleComplex zcschs(doubleComplex z)
{
	
	doubleComplex out;
	out = zrdivs(DoubleComplex(1,0),zsinhs(z));
	return out;
}
