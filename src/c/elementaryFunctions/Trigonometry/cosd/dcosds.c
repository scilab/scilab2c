#include <math.h>
#include "cos.h"
#include "cosd.h"

double	       dcosds(double in) 
{
	if(cos((M_PI/180.0)*in)==0.0)
		return 0.0;
	else
	        return (cos((M_PI/180.0)*in));
}
