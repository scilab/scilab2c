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

libString_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/string/includes

pkglib_LTLIBRARIES =	libString.la

libString_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sstrings.c \
		dstrings.c \
		cstrings.c \
		zstrings.c \
		sstringa.c \
		dstringa.c \
		cstringa.c \
		zstringa.c

HEAD	=	../includes/string.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/string/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/string/string/libString.la

check_PROGRAMS	= 	testFloatString testDoubleString

TESTS		=	testFloatString testDoubleString

#
# -*- Dispine Tests -*-
#
testFloatString_SOURCES = 	testString.h testFloatString.c
testFloatString_CFLAGS	=	$(check_INCLUDES)
testFloatString_LDADD	=	$(check_LDADD)

testDoubleString_SOURCES = 	testString.h testDoubleString.c
testDoubleString_CFLAGS	=	$(check_INCLUDES)
testDoubleString_LDADD	=	$(check_LDADD)
