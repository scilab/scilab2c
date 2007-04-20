##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 16:53:46 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libTanh.a

noinst_LIBRARIES =	libTanh.a

libTanh_a_SOURCES =	$(HEAD) $(SRC)

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

check_PROGRAMS	= 	testTanh

TESTS		=	testTanh

#
# -*- Hyperbolic Tangeant Tests -*-
#
testTanh_SOURCES = 	testTanh.c
testTanh_CFLAGS	=	$(check_INCLUDES)
testTanh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libTanh.a \
			@LIBMATH@


