##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 18:46:31 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libType.a

noinst_LIBRARIES =	libType.a

libType_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	stypes.c \
		dtypes.c \
		ctypes.c \
		ztypes.c \
		stypea.c \
		dtypea.c \
		ctypea.c \
		ztypea.c

HEAD	=	../includes/type.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testType

TESTS		=	testType

#
# -*- Type Tests -*-
#
testType_SOURCES = 	testType.c
testType_CFLAGS	=	$(check_INCLUDES)
testType_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libType.a \
			@LIBMATH@
