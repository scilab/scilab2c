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

libCos_la_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libCos.la

libCos_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	scoss.c \
		dcoss.c \
		ccoss.c \
		zcoss.c \
		scosa.c \
		dcosa.c \
		ccosa.c \
		zcosa.c

HEAD	=	../includes/cos.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testCos

TESTS		=	testCos

#
# -*- Cosine Tests -*-
#
testCos_SOURCES = 	testCos.c
testCos_CFLAGS	=	$(check_INCLUDES)
testCos_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			@LIBMATH@
