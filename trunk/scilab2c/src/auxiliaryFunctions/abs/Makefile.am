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

libAbs_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libAbs.la

libAbs_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sabss.c \
		dabss.c \
		cabss.c \
		zabss.c \
		sabsa.c \
		dabsa.c \
		cabsa.c \
		zabsa.c

HEAD	=	../includes/abs.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatAbs testDoubleAbs

TESTS		=	testFloatAbs testDoubleAbs

#
# -*- Abs Tests -*-
#
testFloatAbs_SOURCES = 	testAbs.h testFloatAbs.c
testFloatAbs_CFLAGS =	$(check_INCLUDES)
testFloatAbs_LDADD =	$(check_LDADD)

testDoubleAbs_SOURCES =	testAbs.h testDoubleAbs.c
testDoubleAbs_CFLAGS =	$(check_INCLUDES)
testDoubleAbs_LDADD =	$(check_LDADD)
