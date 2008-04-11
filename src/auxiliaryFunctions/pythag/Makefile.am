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

libPythag_la_CFLAGS =	-I ../../type \
			-I ../includes \
			-I ../../elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libPythag.la

libPythag_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	spythags.c \
		dpythags.c \
		cpythags.c

HEAD	=	../includes/pythag.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testPythag

TESTS		=	testPythag

#
# -*- Pythag Tests -*-
#
testPythag_SOURCES = 	testPythag.c
testPythag_CFLAGS  =	$(check_INCLUDES)
testPythag_LDADD   =	$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			@LIBMATH@
