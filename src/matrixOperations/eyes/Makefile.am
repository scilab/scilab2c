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

libMatrixEyes_la_CFLAGS =	-I $(top_builddir)/type \
					-I $(top_builddir)/matrixOperations/includes \
                    -I $(top_builddir)/auxiliaryFunctions/includes \
                    -I $(top_builddir)/includes \
                    -I $(top_builddir)/elementaryFunctions/includes


instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixEyes.la

HEAD = ../includes/matrixEyes.h

libMatrixEyes_la_SOURCES = 	$(HEAD) \
				seyesa.c \
				deyesa.c \
				ceyesa.c \
				zeyesa.c

check_PROGRAMS = 	testMatrixEyes

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			libMatrixEyes.la

check_INCLUDES =	-I $(top_builddir)/type \
					-I $(top_builddir)/matrixOperations/includes \
                    -I $(top_builddir)/auxiliaryFunctions/includes \
                    -I $(top_builddir)/includes \
                    -I $(top_builddir)/elementaryFunctions/includes 

testMatrixEyes_SOURCES = testMatrixEyes.c
testMatrixEyes_LDADD = $(check_LDADD)
testMatrixEyes_CFLAGS = $(check_INCLUDES)

TESTS =		testMatrixEyes
