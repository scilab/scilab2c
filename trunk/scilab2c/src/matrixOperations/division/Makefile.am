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

libMatrixDivision_la_CFLAGS =	-I $(top_builddir)/type \
				-I $(top_builddir)/matrixOperations/includes \
				-I $(top_builddir)/elementaryFunctions/includes 

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixDivision.la

HEAD = ../includes/matrixDivision.h

libMatrixDivision_la_SOURCES = 	$(HEAD) \
				srdiva.c \
                sldiva.c \
				drdiva.c \
				dldiva.c \
				zrdiva.c \
                zldiva.c

check_PROGRAMS = 	testMatrixRDivision \
			testMatrixLDivision

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/matrixOperations/transpose/libMatrixTranspose.la \
			$(top_builddir)/matrixOperations/cat/libMatrixConcatenation.la \
			libMatrixDivision.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes

testMatrixLDivision_SOURCES =    testMatrixLDivision.c
testMatrixLDivision_LDADD = $(check_LDADD)
testMatrixLDivision_CFLAGS = $(check_INCLUDES)

testMatrixRDivision_SOURCES =    testMatrixRDivision.c
testMatrixRDivision_LDADD = $(check_LDADD)
testMatrixRDivision_CFLAGS = $(check_INCLUDES)

TESTS =		testMatrixRDivision \
		testMatrixLDivision
