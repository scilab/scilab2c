##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libMatrixChol_la_CFLAGS =	-I $(top_builddir)/type \
				-I .\
				-I $(top_builddir)/matrixOperations/includes \
				-I $(top_builddir)/operations/includes \
				-I $(top_builddir)/elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixChol.la

HEAD = ../includes/chol.h

libMatrixChol_la_SOURCES = 	$(HEAD) \
					schols.c \
					schola.c \
					dchols.c \
					dchola.c \
					cchola.c \
					zchola.c
					
					
############					
##  CHECK			
############


check_PROGRAMS = 	testDoubleChol   testFloatChol

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			$(top_builddir)/operations/division/libDivision.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			$(top_builddir)/auxiliaryFunctions/conj/libConj.la \
			libMatrixChol.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I .\
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/elementaryFunctions/includes

testDoubleChol_SOURCES = testDoubleChol.c
testDoubleChol_LDADD = $(check_LDADD)
testDoubleChol_CFLAGS = $(check_INCLUDES)

testFloatChol_SOURCES = testFloatChol.c
testFloatChol_LDADD = $(check_LDADD)
testFloatChol_CFLAGS = $(check_INCLUDES)

TESTS =		testDoubleChol   testFloatChol

		
		
		
