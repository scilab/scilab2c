##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Sep  6 16:52:43 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libExp10.a

noinst_LIBRARIES =	libExp10.a

libExp10_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sexp10s.c \
		dexp10s.c \
		cexp10s.c \
		zexp10s.c \
		sexp10a.c \
		dexp10a.c \
		cexp10a.c \
		zexp10a.c

HEAD	=	../includes/exp10.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testExp10

TESTS		=	testExp10

testExp10_SOURCES = 	testExp10.c
testExp10_CFLAGS	=	$(check_INCLUDES)
testExp10_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libExp10.a \
			@LIBMATH@