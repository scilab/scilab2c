##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2008 - INRIA - Arnaud TORSET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##




libLogm_la_CFLAGS =	-I ./includes \
			-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/matrixOperations/includes


instdir = $(top_builddir)/lib


pkglib_LTLIBRARIES = libLogm.la

HEAD = ../includes/logm.h


libLogm_la_SOURCES = 	$(HEAD) \
				 zlogma.c \
				 clogma.c \
				 slogma.c \
				 dlogma.c 
				
#############
##  CHECK  ##
#############
					
check_PROGRAMS = 	testDoubleLogm

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
				$(top_builddir)/type/libFloatComplex.la \
				$(top_builddir)/lib/lapack/libscilapack.la \
				$(top_builddir)/lib/blas/libsciblas.la \
				$(top_builddir)/elementaryFunctions/log/libLog.la \
				$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
				$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
				$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
				$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
				$(top_builddir)/auxiliaryFunctions/conj/libConj.la \
				$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
				$(top_builddir)/auxiliaryFunctions/sign/libSign.la \
				$(top_builddir)/operations/multiplication/libMultiplication.la \
				$(top_builddir)/operations/addition/libAddition.la \
				$(top_builddir)/matrixOperations/multiplication/libMatrixMultiplication.la \
				$(top_builddir)/matrixOperations/transpose/libMatrixTranspose.la \
				$(top_builddir)/matrixOperations/inversion/libMatrixInversion.la \
				$(top_builddir)/matrixOperations/spec2/libSpec2.la \
				$(top_builddir)/matrixOperations/zeros/libMatrixZeros.la \
				$(top_builddir)/matrixOperations/logm/libLogm.la

			
check_INCLUDES =	-I ./includes \
			-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/matrixOperations/includes

testDoubleLogm_SOURCES = testDoubleLogm.c
testDoubleLogm_LDADD = $(check_LDADD)
testDoubleLogm_CFLAGS = $(check_INCLUDES)

TESTS =		testDoubleLogm
