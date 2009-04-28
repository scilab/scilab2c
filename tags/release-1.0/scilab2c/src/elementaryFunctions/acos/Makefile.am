##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libAcos_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libAcos.la

libAcos_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sacoss.c \
		dacoss.c \
		cacoss.c \
		zacoss.c \
		sacosa.c \
		dacosa.c \
		cacosa.c \
		zacosa.c

HEAD	=	../includes/acos.h \
		../../auxiliaryFunctions/includes/min.h \
		../../auxiliaryFunctions/includes/max.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/acos/libAcos.la \
			$(top_builddir)/elementaryFunctions/atan/libAtan.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			@LIBMATH@

check_PROGRAMS	= 	testRealsAcos testCplxAcos

TESTS		=	testRealsAcos testCplxAcos

#
# -*- Acosine Tests -*-
#
testRealsAcos_SOURCES = 	testAcos.h testRealsAcos.c
testRealsAcos_CFLAGS	=	$(check_INCLUDES)
testRealsAcos_LDADD	=	$(check_LDADD)

testCplxAcos_SOURCES = 	testAcos.h testCplxAcos.c
testCplxAcos_CFLAGS	=	$(check_INCLUDES)
testCplxAcos_LDADD	=	$(check_LDADD)

