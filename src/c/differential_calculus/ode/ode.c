// FOSSEE IIT Bombay

#include "ODE.h"
#include "types.h"


double ODE(double initial_value, double start_time, double end_time, \
			char *ode_function, double nequs, double eps_abs, double eps_rel \
			double step_size)
{
	double out = 0;
	int status;
	//Setup ODE related parameters
	gsl_odeiv2_system sys = {ode_function, NULL, 2, NULL};

	gsl_odeiv2_step    *s = gsl_odeiv2_step_alloc (gsl_odeiv2_step_rkf45, nequs);
  	gsl_odeiv2_control *c = gsl_odeiv2_control_y_new (eps_abs, eps_rel);
  	gsl_odeiv2_evolve  *e = gsl_odeiv2_evolve_alloc (nequs);
  
  	status = gsl_odeiv2_evolve_apply_fixed_step (e, c, s, &sys, &t, stepsize, x_dot);
	
	if (status == GSL_SUCCESS) {
	return out;
	}
	else return 0;
}
