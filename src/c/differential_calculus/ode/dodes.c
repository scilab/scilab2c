// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

#include "ode.h"
#include "types.h"
#include <gsl/gsl_errno.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_odeiv2.h>


double dodes(double initial_value, double start_time, double end_time, \
			char *ode_function, double nequs, double eps_abs, double eps_rel, \
			double step_size)
{
	double out = 0;
	//int status;
	//Setup ODE related parameters
	gsl_odeiv2_system sys = {ode_function, NULL, 2, NULL};

	gsl_odeiv2_step    *s = gsl_odeiv2_step_alloc (gsl_odeiv2_step_rkf45, nequs);
  	gsl_odeiv2_control *c = gsl_odeiv2_control_y_new (eps_abs, eps_rel);
  	gsl_odeiv2_evolve  *e = gsl_odeiv2_evolve_alloc (nequs);
  
  	gsl_odeiv2_evolve_apply_fixed_step (e, c, s, &sys, &start_time, step_size, &out);
	
	return out;
	
}
