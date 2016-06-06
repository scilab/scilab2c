/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/*Function for solving ODEs using GSL library*/

#include "ode.h"
#include "types.h"
#include <gsl/gsl_errno.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_odeiv2.h>


void dodea(double *initial_value, double start_time, double end_time, \
			int (*ode_function), char *solver_type, double nequs, double eps_abs, \
			double eps_rel, double step_size, int *params, double *out)
{
	double t = start_time;
	gsl_odeiv2_step_type *step_type;

	/*Initialise output to initial state*/
	int counter = 0;
	for (counter = 0; counter<nequs;counter++)
	{
		out[counter] = initial_value[counter];
	}

	/*Setup ODE related parameters*/
	gsl_odeiv2_system sys = {ode_function, NULL, nequs, params};

	/*Select step solver*/
	if (solver_type == "adams")
		step_type = gsl_odeiv2_step_msadams;
	if (solver_type == "stiff")
		step_type = gsl_odeiv2_step_msbdf;
	if (solver_type == "rk")
		step_type = gsl_odeiv2_step_rk4;
	if (solver_type == "rkf")
		step_type = gsl_odeiv2_step_rkf45;
	if (solver_type == "root")
		step_type = gsl_odeiv2_step_rkck;
	if (solver_type == "discrete")
		step_type = gsl_odeiv2_step_rk8pd;
	else 
		step_type = gsl_odeiv2_step_rkf45;
		
	gsl_odeiv2_step    *s = gsl_odeiv2_step_alloc (step_type, nequs);
  	gsl_odeiv2_control *c = gsl_odeiv2_control_y_new (eps_abs, eps_rel);
  	gsl_odeiv2_evolve  *e = gsl_odeiv2_evolve_alloc (nequs);
  
  	while(t < end_time)
  	{
  		gsl_odeiv2_evolve_apply_fixed_step (e, c, s, &sys, &t, step_size, out);
	}

	gsl_odeiv2_evolve_free (e);
  	gsl_odeiv2_control_free (c);
  	gsl_odeiv2_step_free (s);
}
