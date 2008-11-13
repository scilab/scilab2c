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

libSign_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libSign.la

libSign_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssigns.c \
		dsigns.c \
		csigns.c \
		zsigns.c \
		ssigna.c \
		dsigna.c \
		csigna.c \
		zsigna.c

HEAD	=	../includes/sign.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type \
			-I $(top_builddir)/auxiliaryFunctions/includes

check_PROGRAMS	= 	testSign

TESTS		=	testSign

#
# -*- Sign Tests -*-
#
testSign_SOURCES = 	testSign.h testSign.c
testSign_CFLAGS	=	$(check_INCLUDES)
testSign_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/auxiliaryFunctions/sign/libSign.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			@LIBMATH@
