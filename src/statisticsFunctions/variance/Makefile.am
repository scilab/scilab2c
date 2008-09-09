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

libVariance_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/operations/includes \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libVariance.la

libVariance_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	svariancea.c \
		scolumnvariancea.c \
		dvariancea.c \
		srowvariancea.c \
		drowvariancea.c \
		dcolumnvariancea.c \
		cvariancea.c \
		crowvariancea.c \
		ccolumnvariancea.c \
		zvariancea.c \
		zrowvariancea.c \
		zcolumnvariancea.c

HEAD	=	../includes/variance.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/statisticsFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/matrixOperations/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/statisticsFunctions/variance/libVariance.la \
			$(top_builddir)/statisticsFunctions/sum/libSum.la \
			$(top_builddir)/statisticsFunctions/mean/libMean.la \
			$(top_builddir)/elementaryFunctions/pow/libPow.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/matrixOperations/transpose/libMatrixTranspose.la
			@LIBMATH@

check_PROGRAMS	= 	testFloatVariance testDoubleVariance

TESTS		=	testFloatVariance testDoubleVariance

#
# -*- Variance Tests -*-
#
testFloatVariance_SOURCES = testFloatVariance.c
testFloatVariance_CFLAGS =	$(check_INCLUDES)
testFloatVariance_LDADD =	$(check_LDADD)

testDoubleVariance_SOURCES =testDoubleVariance.c
testDoubleVariance_CFLAGS =	$(check_INCLUDES)
testDoubleVariance_LDADD =	$(check_LDADD)
