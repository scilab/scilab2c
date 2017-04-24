#include <math.h>
#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"
#include "csc.h"
#include "doubleComplex.h"
#include "division.h"

doubleComplex zcscs(doubleComplex z)
{
	doubleComplex out;
	//out = zrdivs(DoubleComplex(1,0),zsins(z));
	double real = zreals(z);
	double imag = zimags(z);
	return zrdivs(DoubleComplex(1,0),(DoubleComplex(dsins(real) * dcoshs(imag), dcoss(real) * dsinhs(imag))));
	//return out;
}
