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

libLog_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libLog.la

libLog_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	slogs.c \
		dlogs.c \
		clogs.c \
		zlogs.c \
		sloga.c \
		dloga.c \
		cloga.c \
		zloga.c

HEAD	=	$(top_builddir)/elementaryFunctions/includes/log.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/log/libLog.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/log1p/libLog1p.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatLog testDoubleLog

TESTS		=	testFloatLog testDoubleLog

testFloatLog_SOURCES = 	testFloatLog.c
testFloatLog_CFLAGS =	$(check_INCLUDES)
testFloatLog_LDADD =	$(check_LDADD)

testDoubleLog_SOURCES = 	testDoubleLog.c
testDoubleLog_CFLAGS	=	$(check_INCLUDES)
testDoubleLog_LDADD	=	$(check_LDADD)
