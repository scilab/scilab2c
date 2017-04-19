/*//#include "sec.h"
//#include "cos.h"
//#include <math.h>
//#include "doubleComplex.h"
//#include "division.h"
*/

/*#include <math.h>
#include "sin.h"
#include "cos.h"
#include "sinh.h"
#include "cosh.h"
#include "csc.h"
#include "division.h"
*/
#include <complex.h>
#include <stdio.h>

/*doubleComplex zsecs(doubleComplex z)
{
	
	doubleComplex out;
	out = zrdivs(DoubleComplex(1,0),zcoss(z));
	return out;
}
*/
void zsecs(double complex z)
{
	
	//double complex out;
	/*out = zrdivs(DoubleComplex(1,0),zcoss(z));
	return out;
}*/

	double complex out = 1.0/(ccos(z));
	if(cimag(out)==0.0)
	{
		printf("%.7lf\n",creal(out));
		//out=creal(out);
	}
	else if(creal(out)==0.0)
	{
		printf("%.7lfi\n",cimag(out));
		//out=cimag(out);
	}
	else if(creal(out)!=0.0 && cimag(out)<0.0)
	{
		printf("%.7lf %.7lfi\n",creal(out),cimag(out));
		//out=x;
	}
	else
	{
		printf("%.7lf + %.7lfi\n", creal(out), cimag(out));
		//out=x;
	}
    //return out;
}
