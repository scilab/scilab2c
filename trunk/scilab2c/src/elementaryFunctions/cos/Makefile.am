##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 16:42:18 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libCos.a

noinst_LIBRARIES =	libCos.a

libCos_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	scoss.c \
		dcoss.c \
		ccoss.c \
		zcoss.c \
		scosa.c \
		dcosa.c \
		ccosa.c \
		zcosa.c

HEAD	=	../includes/cos.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testCos

TESTS		=	testCos

#
# -*- Cosine Tests -*-
#
testCos_SOURCES = 	testCos.c
testCos_CFLAGS	=	$(check_INCLUDES)
testCos_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libCos.a \
			$(top_builddir)/lib/libSin.a \
			$(top_builddir)/lib/libCosh.a \
			$(top_builddir)/lib/libSinh.a \
			@LIBMATH@
