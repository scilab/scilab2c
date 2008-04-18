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

libTanh_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libTanh.la

libTanh_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	stanhs.c \
		dtanhs.c \
		ctanhs.c \
		ztanhs.c \
		stanha.c \
		dtanha.c \
		ctanha.c \
		ztanha.c

HEAD	=	../includes/tanh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/tan/libTan.la \
			$(top_builddir)/elementaryFunctions/tanh/libTanh.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatTanh testDoubleTanh

TESTS		=	testFloatTanh testDoubleTanh

#
# -*- Hyperbolic Tangeant Tests -*-
#
testFloatTanh_SOURCES = 	testFloatTanh.c
testFloatTanh_CFLAGS	=	$(check_INCLUDES)
testFloatTanh_LDADD	=	$(check_LDADD)

testDoubleTanh_SOURCES = 	testDoubleTanh.c
testDoubleTanh_CFLAGS	=	$(check_INCLUDES)
testDoubleTanh_LDADD	=	$(check_LDADD)