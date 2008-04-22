/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __LAPACK_H__
#define __LAPACK_H__


#define getRelativeMachinePrecision()		dlamch_("e", 1L)
#define getOverflowThreshold()			dlamch_("o", 1L)
#define getUnderflowThreshold()			dlamch_("u", 1L)

/**
 *  -- LAPACK auxiliary routine (version 3.0) --
 *     Univ. of Tennessee, Univ. of California Berkeley, NAG Ltd.,
 *     Courant Institute, Argonne National Lab, and Rice University
 *     October 31, 1992
 *
 *  Purpose
 *  =======
 *
 *  DLAMCH determines double precision machine parameters.
 *
 *  Arguments
 *  =========
 *
 *  CMACH   (input) CHARACTER*1
 *          Specifies the value to be returned by DLAMCH:
 *          = 'E' or 'e',   DLAMCH := eps
 *          = 'S' or 's ,   DLAMCH := sfmin
 *          = 'B' or 'b',   DLAMCH := base
 *          = 'P' or 'p',   DLAMCH := eps*base
 *          = 'N' or 'n',   DLAMCH := t
 *          = 'R' or 'r',   DLAMCH := rnd
 *          = 'M' or 'm',   DLAMCH := emin
 *          = 'U' or 'u',   DLAMCH := rmin
 *          = 'L' or 'l',   DLAMCH := emax
 *          = 'O' or 'o',   DLAMCH := rmax
 *
 *          where
 *
 *          eps   = relative machine precision
 *          sfmin = safe minimum, such that 1/sfmin does not overflow
 *          base  = base of the machine
 *          prec  = eps*base
 *          t     = number of (base) digits in the mantissa
 *          rnd   = 1.0 when rounding occurs in addition, 0.0 otherwise
 *          emin  = minimum exponent before (gradual) underflow
 *          rmin  = underflow threshold - base**(emin-1)
 *          emax  = largest exponent before overflow
 *          rmax  = overflow threshold  - (base**emax)*(1-eps)
 *
 * =====================================================================
 **/
extern		double dlamch_  (char *CMACH, unsigned long int i);


#endif /* !__LAPACK_H__ */
