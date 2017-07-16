// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Jorawar Singh, Sandeep Gupta
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


subdemolist = ["Singular Value Decomposition", "SVD.dem.sce";
			  "Singular Value Approximation", "SVA.dem.sce";
			  "SQROOT", "SQROOT.dem.sce";
			  "SPEC", "SPEC.dem.sce";
			  "ROWCOMP","ROWCOMP.dem.sce";
			  "QR Decomposition", "QR.dem.sce";
			  "NORM type 2", "NORM.dem.sce";
			  "HOUSEHOLDER","HOUSEHOLDER.dem.sce";
			  "HESS", "HESS.dem.sce";
			  "GIVENS Transformation", "GIVENS.dem.sce";
			  "Full rank factorization","FULLRF.dem.sce";
              ];

global SCI2CHOME;
subdemolist(:,2) = SCI2CHOME + "/demos/LinearAlgebra/"+ subdemolist(:,2);
