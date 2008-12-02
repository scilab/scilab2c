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




libLevin_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/signalProcessing/includes


instdir = $(top_builddir)/lib


pkglib_LTLIBRARIES = libLevin.la

HEAD = ../includes/levin.h


libLevin_la_SOURCES = 	$(HEAD) \
					levinUtils.c \
					slevina.c \
					dlevina.c


###############
#### Check ####
###############
check_PROGRAMS = 	testDoubleLevin 	testFloatLevin


check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \ 
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/matrixOperations/inversion/libMatrixInversion.la \
			$(top_builddir)/matrixOperations/multiplication/libMatrixMultiplication.la \
			$(top_builddir)/matrixOperations/subtraction/libMatrixSubtraction.la \
			$(top_builddir)/matrixOperations/jmat/libJmat.la \
			$(top_builddir)/matrixOperations/eye/libMatrixEye.la \
			$(top_builddir)/signalProcessing/levin/libLevin.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			@LIBMATH@


check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/signalProcessing/includes


testDoubleLevin_SOURCES = testDoubleLevin.c
testDoubleLevin_LDADD = $(check_LDADD)
testDoubleLevin_CFLAGS = $(check_INCLUDES)

testFloatLevin_SOURCES = testFloatLevin.c
testFloatLevin_LDADD = $(check_LDADD)
testFloatLevin_CFLAGS = $(check_INCLUDES)


TESTS =		testDoubleLevin 	testFloatLevin
