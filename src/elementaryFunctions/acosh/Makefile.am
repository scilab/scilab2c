##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Sep  6 10:33:56 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAcosh.a

noinst_LIBRARIES =	libAcosh.a

libAcosh_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sacoshs.c \
		dacoshs.c \
		cacoshs.c \
		zacoshs.c \
		sacosha.c \
		dacosha.c \
		cacosha.c \
		zacosha.c

HEAD	=	../includes/acosh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAcosh

TESTS		=	testAcosh

#
# -*- Hyperbolic Acosine Tests -*-
#
testAcosh_SOURCES = 	testAcosh.c
testAcosh_CFLAG	  =	$(check_INCLUDES)
testAcosh_LDADD	  =	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAcosh.a \
			@LIBMATH@