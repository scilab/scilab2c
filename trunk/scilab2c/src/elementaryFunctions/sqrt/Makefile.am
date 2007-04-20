##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Apr 20 10:54:14 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libSqrt.a

noinst_LIBRARIES =	libSqrt.a

libSqrt_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssqrts.c \
		dsqrts.c \
		csqrts.c \
		zsqrts.c \
		ssqrta.c \
		dsqrta.c \
		csqrta.c \
		zsqrta.c

HEAD	=	../includes/sqrt.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testSqrt

TESTS		=	testSqrt

#
# -*- Square Root Tests -*-
#
testSqrt_SOURCES = 	testSqrt.c
testSqrt_CFLAGS	=	$(check_INCLUDES)
testSqrt_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSqrt.a \
			@LIBMATH@
