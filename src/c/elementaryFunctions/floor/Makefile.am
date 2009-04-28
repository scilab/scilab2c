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



libFloor_la_CFLAGS =	-I $(top_builddir)/type \
				-I $(top_builddir)/elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libFloor.la

libFloor_la_SOURCES =  $(HEAD) $(SRC)

HEAD =	../includes/floor.h

SRC	=	sfloors.c \
		dfloors.c \
		cfloors.c \
		zfloors.c \
		sfloora.c \
		dfloora.c \
		cfloora.c \
		zfloora.c

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
				-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/floor/libFloor.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatFloor testDoubleFloor

TESTS		=		testFloatFloor testDoubleFloor

#
# -*- Floor Tests -*-
#
testFloatFloor_SOURCES	 =	testFloatFloor.c
testFloatFloor_CFLAGS	 =	$(check_INCLUDES)
testFloatFloor_LDADD	 =	$(check_LDADD)

testDoubleFloor_SOURCES	 = 	testDoubleFloor.c
testDoubleFloor_CFLAGS	 =	$(check_INCLUDES)
testDoubleFloor_LDADD	 =	$(check_LDADD)
