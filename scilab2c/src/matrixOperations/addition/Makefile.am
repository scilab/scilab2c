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

libMatrixAddition_la_CFLAGS =	-I $(top_builddir)/type \
				-I $(top_builddir)/matrixOperations/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixAddition.la

libMatrixAddition_la_SOURCES = 	saddma.c \
				daddma.c \
				caddma.c \
				zaddma.c

check_PROGRAMS = 	testMatrixAddition

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			libMatrixAddition.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes

testMatrixAddition_SOURCES = testMatrixAddition.c
testMatrixAddition_LDADD = $(check_LDADD)
testMatrixAddition_CFLAGS = $(check_INCLUDES)

TESTS =		testMatrixAddition