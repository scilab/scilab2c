##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Sep  6 11:18:16 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAsinh.a

noinst_LIBRARIES =	libAsinh.a

libAsinh_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sasinhs.c \
		dasinhs.c \
		casinhs.c \
		zasinhs.c \
		sasinha.c \
		dasinha.c \
		casinha.c \
		zasinha.c

HEAD	=	../includes/asinh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAsinh

TESTS		=	testAsinh

#
# -*- Hyperbolic ArcSine Tests -*-
#
testAsinh_SOURCES = 	testAsinh.c
testAsinh_CFLAGS	=	$(check_INCLUDES)
testAsinh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAsinh.a \
			@LIBMATH@