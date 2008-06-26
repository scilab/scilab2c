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

libSqrt_la_CFLAGS =	-I  $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libSqrt.la

libSqrt_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssqrts.c \
		dsqrts.c \
		csqrts.c \
		zsqrts.c \
		ssqrta.c \
		dsqrta.c \
		csqrta.c \
		zsqrta.c

HEAD	=	../includes/sqrt.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatSqrt testDoubleSqrt

TESTS		=	testFloatSqrt testDoubleSqrt

#
# -*- Square Root Tests -*-
#
testFloatSqrt_SOURCES = 	testSqrt.h testFloatSqrt.c
testFloatSqrt_CFLAGS	=	$(check_INCLUDES)
testFloatSqrt_LDADD	=	$(check_LDADD)

testDoubleSqrt_SOURCES = 	testSqrt.h testDoubleSqrt.c
testDoubleSqrt_CFLAGS	=	$(check_INCLUDES)
testDoubleSqrt_LDADD	=	$(check_LDADD)
