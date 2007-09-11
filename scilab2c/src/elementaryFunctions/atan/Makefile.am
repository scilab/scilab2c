##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Sep  6 11:52:29 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAtan.a

noinst_LIBRARIES =	libAtan.a

libAtan_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	satans.c \
		datans.c \
		catans.c \
		zatans.c \
		satana.c \
		datana.c \
		catana.c \
		zatana.c

HEAD	=	../includes/atan.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAtan

TESTS		=	testAtan

#
# -*- Atangeant Tests -*-
#
testAtan_SOURCES = 	testAtan.c
testAtan_CFLAGS	=	$(check_INCLUDES)
testAtan_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAtan.a \
			@LIBMATH@
