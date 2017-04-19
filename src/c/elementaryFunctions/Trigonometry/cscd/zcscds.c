#include <math.h>
#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"
#include "csc.h"
#include "cscd.h"
#include "doubleComplex.h"
#include "division.h"

doubleComplex zcscds(doubleComplex z)
{
	
	doubleComplex out;
	out = zrdivs(DoubleComplex(1,0),zsins(z));
	return out;
}
