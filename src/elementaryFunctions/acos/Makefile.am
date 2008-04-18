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

libAcos_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libAcos.la

libAcos_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sacoss.c \
		dacoss.c \
		cacoss.c \
		zacoss.c \
		sacosa.c \
		dacosa.c \
		cacosa.c \
		zacosa.c

HEAD	=	../includes/acos.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/acos/libAcos.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatAcos testDoubleAcos

TESTS		=	testFloatAcos testDoubleAcos

#
# -*- Acosine Tests -*-
#
testFloatAcos_SOURCES = 	testFloatAcos.c
testFloatAcos_CFLAGS	=	$(check_INCLUDES)
testFloatAcos_LDADD	=	$(check_LDADD)

testDoubleAcos_SOURCES = 	testDoubleAcos.c
testDoubleAcos_CFLAGS	=	$(check_INCLUDES)
testDoubleAcos_LDADD	=	$(check_LDADD)
