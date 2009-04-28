##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2008-2008 - INRIA - Allan SIMON
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libAtan2_la_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libAtan2.la

libAtan2_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	satan2s.c \
		datan2s.c \
		satan2a.c \
		datan2a.c

HEAD	=	../includes/atan2.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/atan/libAtan.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/elementaryFunctions/atan2/libAtan2.la \
			$(top_builddir)/elementaryFunctions/lnp1m1/libLnp1m1.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la 

check_PROGRAMS	= 	testAtan2

TESTS		=	testAtan2

#
# -*- ArcTangeant2  Tests -*-
#
testAtan2_SOURCES = 	testAtan2.c
testAtan2_CFLAGS =		$(check_INCLUDES)
testAtan2_LDADD =		$(check_LDADD)

