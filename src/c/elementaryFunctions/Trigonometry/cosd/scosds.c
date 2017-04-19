#include <math.h>
#include "cosd.h"
#include "cos.h"

float		scosds(float in) 
{
	if(cosf((M_PI/180.0)*in)==0.0)
		return 0.0;
	else
		return (cosf((M_PI/180.0)*in));
}
