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

libAsinh_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libAsinh.la

libAsinh_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sasinhs.c \
		dasinhs.c \
		casinhs.c \
		zasinhs.c \
		sasinha.c \
		dasinha.c \
		casinha.c \
		zasinha.c

HEAD	=	../includes/asinh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/asinh/libAsinh.la \
			$(top_builddir)/elementaryFunctions/asin/libAsin.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/atan/libAtan.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatAsinh testDoubleAsinh

TESTS		=	testFloatAsinh testDoubleAsinh

#
# -*- Hyperbolic ArcSine Tests -*-
#
testFloatAsinh_SOURCES = 	testFloatAsinh.c
testFloatAsinh_CFLAGS =	$(check_INCLUDES)
testFloatAsinh_LDADD	=	$(check_LDADD)

testDoubleAsinh_SOURCES = 	testDoubleAsinh.c
testDoubleAsinh_CFLAGS =	$(check_INCLUDES)
testDoubleAsinh_LDADD	=	$(check_LDADD)