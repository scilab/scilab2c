##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libAcosh_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libAcosh.la

libAcosh_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sacoshs.c \
		dacoshs.c \
		cacoshs.c \
		zacoshs.c \
		sacosha.c \
		dacosha.c \
		cacosha.c \
		zacosha.c

HEAD	=	../includes/acosh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	  =	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/acos/libAcos.la \
			$(top_builddir)/elementaryFunctions/acosh/libAcosh.la \
			$(top_builddir)/elementaryFunctions/atan/libAtan.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatAcosh testDoubleAcosh

TESTS		=	testFloatAcosh testDoubleAcosh

#
# -*- Hyperbolic Acosine Tests -*-
#
testFloatAcosh_SOURCES = 	testFloatAcosh.c
testFloatAcosh_CFLAGS  =	$(check_INCLUDES)
testFloatAcosh_LDADD	  =	$(check_LDADD)

testDoubleAcosh_SOURCES = 	testDoubleAcosh.c
testDoubleAcosh_CFLAGS  =	$(check_INCLUDES)
testDoubleAcosh_LDADD	  =	$(check_LDADD)