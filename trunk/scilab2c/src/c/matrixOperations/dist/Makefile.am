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

libDist_la_CFLAGS =	-I $(top_builddir)/type \
				-I $(top_builddir)/matrixOperations/includes \
				-I $(top_builddir)/operations/includes \
				-I $(top_builddir)/elementaryFunctions/includes\
				-I $(top_builddir)/auxiliaryFunctions/includes


instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libDist.la

HEAD = ../includes/dist.h

libDist_la_SOURCES = 	$(HEAD) \
					sdists.c \
					sdista.c \
					ddists.c \
					ddista.c \
					cdists.c \
					cdista.c \
					zdists.c \
					zdista.c
					
					
############					
##  CHECK			
############


check_PROGRAMS = 	testDoubleDist   testFloatDist

check_LDADD =	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/pow/libPow.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/conj/libConj.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			$(top_builddir)/matrixOperations/multiplication/libMatrixMultiplication.la \
			$(top_builddir)/matrixOperations/transpose/libMatrixTranspose.la \
			$(top_builddir)/matrixOperations/spec/libSpec.la \
			$(top_builddir)/matrixOperations/zeros/libMatrixZeros.la \
			libDist.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/elementaryFunctions/includes\
			-I $(top_builddir)/auxiliaryFunctions/includes 

testDoubleDist_SOURCES = testDoubleDist.c
testDoubleDist_LDADD = $(check_LDADD)
testDoubleDist_CFLAGS = $(check_INCLUDES)

testFloatDist_SOURCES = testFloatDist.c
testFloatDist_LDADD = $(check_LDADD)
testFloatDist_CFLAGS = $(check_INCLUDES)

TESTS =		testDoubleDist   testFloatDist

		
		
		
