##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Apr 20 11:27:10 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libSin.a

noinst_LIBRARIES =	libSin.a

libSin_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssins.c \
		dsins.c \
		csins.c \
		zsins.c \
		ssina.c \
		dsina.c \
		csina.c \
		zsina.c

HEAD	=	../includes/sin.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testSin

TESTS		=	testSin

#
# -*- Sine Tests -*-
#
testSin_SOURCES = 	testSin.c
testSin_CFLAGS	=	$(check_INCLUDES)
testSin_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSin.a \
			$(top_builddir)/lib/libCos.a \
			$(top_builddir)/lib/libSinh.a \
			$(top_builddir)/lib/libCosh.a \
			@LIBMATH@
