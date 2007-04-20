##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 16:45:10 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libCosh.a

noinst_LIBRARIES =	libCosh.a

libCosh_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	scoshs.c \
		dcoshs.c \
		ccoshs.c \
		zcoshs.c \
		scosha.c \
		dcosha.c \
		ccosha.c \
		zcosha.c

HEAD	=	../includes/cosh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testCosh

TESTS		=	testCosh

#
# -*- Hyperbolic Cosine Tests -*-
#
testCosh_SOURCES = 	testCosh.c
testCosh_CFLAGS	=	$(check_INCLUDES)
testCosh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libCosh.a \
			@LIBMATH@
