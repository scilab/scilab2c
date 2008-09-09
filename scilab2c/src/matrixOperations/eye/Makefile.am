##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2008-2008 - INRIA - Allan SIMON
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libMatrixEye_la_CFLAGS =	-I $(top_builddir)/type \
				-I $(top_builddir)/matrixOperations/includes \
				-I $(top_builddir)/auxiliaryFunctions/includes \
				-I $(top_builddir)/includes \
				-I $(top_builddir)/elementaryFunctions/includes


instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixEye.la

HEAD = ../includes/matrixEye.h

libMatrixEye_la_SOURCES = 	$(HEAD) \
				seyea.c \
				deyea.c \
				ceyea.c \
				zeyea.c

check_PROGRAMS = 	testMatrixEye

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/sign/libSign.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/auxiliaryFunctions/frexp/libFrexp.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/pow/libPow.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la\
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			libMatrixEye.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/includes \
		 	-I $(top_builddir)/elementaryFunctions/includes

testMatrixEye_SOURCES = testMatrixEye.c
testMatrixEye_LDADD = $(check_LDADD)
testMatrixEye_CFLAGS = $(check_INCLUDES)

TESTS =		testMatrixEye
