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

libExp10_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libExp10.la

libExp10_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sexp10s.c \
		dexp10s.c \
		cexp10s.c \
		zexp10s.c \
		sexp10a.c \
		dexp10a.c \
		cexp10a.c \
		zexp10a.c

HEAD	=	../includes/exp10.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testExp10

TESTS		=	testExp10

testExp10_SOURCES = 	testExp10.c
testExp10_CFLAGS	=	$(check_INCLUDES)
testExp10_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/exp10/libExp10.la \
			@LIBMATH@