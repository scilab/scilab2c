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
 
#ifndef __ODE_H__
#define __ODE_H__

double dodes(double initial_value, double start_time, double end_time, \
			int (*ode_function)(double, double*, double*, int*), char *solver_type, double nequs, double eps_abs, double eps_rel, \
			double step_size, int *params);

void dodea(double *initial_value, double start_time, double end_time, \
			int (*ode_function)(double, double*, double*, int*), char *solver_type, double nequs, double eps_abs, double eps_rel, \
			double step_size, int *params, double *out);

#endif /*__ODE_H__*/