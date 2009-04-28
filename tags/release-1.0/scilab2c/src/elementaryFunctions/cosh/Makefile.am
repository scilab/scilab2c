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

libCosh_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libCosh.la

libCosh_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	scoshs.c \
		dcoshs.c \
		ccoshs.c \
		zcoshs.c \
		scosha.c \
		dcosha.c \
		ccosha.c \
		zcosha.c

HEAD	=	../includes/cosh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatCosh testDoubleCosh

TESTS		=	testFloatCosh testDoubleCosh

#
# -*- Hyperbolic Cosine Tests -*-
#
testFloatCosh_SOURCES = 	testCosh.h testFloatCosh.c
testFloatCosh_CFLAGS	=	$(check_INCLUDES)
testFloatCosh_LDADD	=	$(check_LDADD)

testDoubleCosh_SOURCES = 	testCosh.h testDoubleCosh.c
testDoubleCosh_CFLAGS	=	$(check_INCLUDES)
testDoubleCosh_LDADD	=	$(check_LDADD)
