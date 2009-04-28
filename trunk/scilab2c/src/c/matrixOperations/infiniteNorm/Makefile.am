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

libMatrixInfiniteNorm_la_CFLAGS =	-I $(top_builddir)/type \
					-I $(top_builddir)/matrixOperations/includes \
					-I $(top_builddir)/auxiliaryFunctions/includes \
					-I $(top_builddir)/includes \
					-I $(top_builddir)/elementaryFunctions/includes \
					-I $(top_builddir)/operations/includes


instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixInfiniteNorm.la

HEAD = ../includes/infiniteNorm.h

libMatrixInfiniteNorm_la_SOURCES = 	$(HEAD) \
				sinfnorma.c \
				dinfnorma.c \
				cinfnorma.c \
				zinfnorma.c

check_PROGRAMS = 	testMatrixInfiniteNorm

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/sign/libSign.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			libMatrixInfiniteNorm.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/operations/includes

testMatrixInfiniteNorm_SOURCES = testMatrixInfiniteNorm.c
testMatrixInfiniteNorm_LDADD = $(check_LDADD)
testMatrixInfiniteNorm_CFLAGS = $(check_INCLUDES)

TESTS =		testMatrixInfiniteNorm
