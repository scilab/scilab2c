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

libTan_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libTan.la

libTan_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	stans.c \
		dtans.c \
		ctans.c \
		ztans.c \
		stana.c \
		dtana.c \
		ctana.c \
		ztana.c

HEAD	=	../includes/tan.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/tan/libTan.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatTan testDoubleTan

TESTS		=	testFloatTan testDoubleTan

#
# -*- Tangeant Tests -*-
#
testFloatTan_SOURCES 	= 	testFloatTan.c
testFloatTan_CFLAGS	=	$(check_INCLUDES) -g
testFloatTan_LDADD	=	$(check_LDADD)

testDoubleTan_SOURCES 	= 	testDoubleTan.c
testDoubleTan_CFLAGS	=	$(check_INCLUDES) -g
testDoubleTan_LDADD	=	$(check_LDADD)
