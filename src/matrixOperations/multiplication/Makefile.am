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

libMatrixMultiplication_la_CFLAGS =	-I $(top_builddir)/type \
					-I $(top_builddir)/matrixOperations/includes \
					-I $(top_builddir)/operations/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixMultiplication.la

HEAD = ../includes/matrixMultiplication.h

libMatrixMultiplication_la_SOURCES = 	$(HEAD) \
					smulma.c \
					dmulma.c \
					cmulma.c \
					zmulma.c

check_PROGRAMS = 	testMatrixMultiplication

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			libMatrixMultiplication.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/operations/includes

testMatrixMultiplication_SOURCES = 	testFloatMatrixMultiplication.c \
					testDoubleMatrixMultiplication.c
testMatrixMultiplication_LDADD = $(check_LDADD)
testMatrixMultiplication_CFLAGS = $(check_INCLUDES)

TESTS =		testMatrixMultiplication