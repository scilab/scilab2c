#include "sech.h"
#include "sec.h"
#include <math.h>
#include "cos.h"
#include "cosh.h"
#include "doubleComplex.h"
#include "division.h"

doubleComplex zsechs(doubleComplex z)
{
	
	doubleComplex out;
	out = zrdivs(DoubleComplex(1,0),zcoshs(z));
	return out;
}
