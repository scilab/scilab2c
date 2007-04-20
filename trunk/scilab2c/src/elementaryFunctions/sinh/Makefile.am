##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Apr 20 16:47:28 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libSinh.a

noinst_LIBRARIES =	libSinh.a

libSinh_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssinhs.c \
		dsinhs.c \
		csinhs.c \
		zsinhs.c \
		ssinha.c \
		dsinha.c \
		csinha.c \
		zsinha.c

HEAD	=	../includes/sinh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testSinh

TESTS		=	testSinh

#
# -*- Hyperbolic Sine Tests -*-
#
testSinh_SOURCES = 	testSinh.c
testSinh_CFLAGS	=	$(check_INCLUDES)
testSinh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSinh.a \
			$(top_builddir)/lib/libSin.a \
			$(top_builddir)/lib/libCosh.a \
			$(top_builddir)/lib/libCos.a \
			@LIBMATH@
