##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2008-2008 - INRIA - Arnaud TORSET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libMatrixPow_la_CFLAGS =	-I $(top_builddir)/type \
					-I $(top_builddir)/includes \
					-I $(top_builddir)/operations/includes\
					-I $(top_builddir)/matrixOperations/includes


instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixPow.la

HEAD = ../includes/matrixPow.h

libMatrixPow_la_SOURCES = 	$(HEAD) \
				dpowma.c\
				spowma.c

check_PROGRAMS = 	testDoubleMatrixPow

check_LDADD =	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/matrixOperations/eye/libMatrixEye.la \
			$(top_builddir)/matrixOperations/transpose/libMatrixTranspose.la \
			$(top_builddir)/matrixOperations/multiplication/libMatrixMultiplication.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			libMatrixPow.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/includes \
			-I $(top_builddir)/operations/includes\
			-I $(top_builddir)/matrixOperations/includes

testDoubleMatrixPow_SOURCES = testDoublePowm.c
testDoubleMatrixPow_LDADD = $(check_LDADD)
testDoubleMatrixPow_CFLAGS = $(check_INCLUDES)

TESTS =		testDoubleMatrixPow
