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

libMatrixDeterm_la_CFLAGS =	-I $(top_builddir)/type \
				-I $(top_builddir)/matrixOperations/includes \
				-I $(top_builddir)/operations/includes


instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixDeterm.la

HEAD = ../includes/determ.h

libMatrixDeterm_la_SOURCES = 	$(HEAD) \
					sdeterma.c \
					ddeterma.c \
					cdeterma.c \
					zdeterma.c
					
					
############					
##  CHECK			
############


check_PROGRAMS = 	testDoubleDeterm   testFloatDeterm

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			$(top_builddir)/operations/division/libDivision.la \
			$(top_builddir)/auxiliaryFunctions/conj/libConj.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			libMatrixDeterm.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/elementaryFunctions/includes

testDoubleDeterm_SOURCES = testDoubleDeterm.c
testDoubleDeterm_LDADD = $(check_LDADD)
testDoubleDeterm_CFLAGS = $(check_INCLUDES)

testFloatDeterm_SOURCES = testFloatDeterm.c
testFloatDeterm_LDADD = $(check_LDADD)
testFloatDeterm_CFLAGS = $(check_INCLUDES)

TESTS =		testDoubleDeterm   testFloatDeterm

		
		
		
