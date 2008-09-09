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

libMatrixExponential_la_CFLAGS =	-I $(top_builddir)/type \
					-I $(top_builddir)/matrixOperations/includes \
					-I $(top_builddir)/auxiliaryFunctions/includes \
					-I $(top_builddir)/includes \
					-I $(top_builddir)/elementaryFunctions/includes \
					-I $(top_builddir)/operations/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixExponential.la

HEAD = ../includes/matrixExponential.h

libMatrixExponential_la_SOURCES = 	$(HEAD) \
					dexpma.c \
					zexpma.c \
                    sexpma.c \
                    cexpma.c


check_PROGRAMS = 	testMatrixExponential

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			$(top_builddir)/matrixOperations/division/libMatrixDivision.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/sign/libSign.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/auxiliaryFunctions/frexp/libFrexp.la \
			$(top_builddir)/auxiliaryFunctions/conj/libConj.la \
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
			$(top_builddir)/matrixOperations/transpose/libMatrixTranspose.la \
			$(top_builddir)/matrixOperations/cat/libMatrixConcatenation.la \
			$(top_builddir)/matrixOperations/multiplication/libMatrixMultiplication.la \
			$(top_builddir)/matrixOperations/addition/libMatrixAddition.la \
			$(top_builddir)/matrixOperations/subtraction/libMatrixSubtraction.la \
			$(top_builddir)/matrixOperations/infiniteNorm/libMatrixInfiniteNorm.la \
			$(top_builddir)/matrixOperations/eye/libMatrixEye.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			libMatrixExponential.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/operations/includes


testMatrixExponential_SOURCES = 	testMatrixExponential.c
testMatrixExponential_LDADD = $(check_LDADD)
testMatrixExponential_CFLAGS = $(check_INCLUDES)


TESTS =		testMatrixExponential
