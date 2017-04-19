#include "coth.h"
#include "tanh.h"
#include "tan.h"
#include <math.h>
#include "doubleComplex.h"
#include "division.h"

doubleComplex zcoths(doubleComplex z)
{
	
	doubleComplex out;
	out = zrdivs(DoubleComplex(1,0),ztanhs(z));
	return out;
}
