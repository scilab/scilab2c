##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Apr 26 11:10:23 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libIsempty.a

noinst_LIBRARIES =	libIsempty.a

libIsempty_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sisemptya.c \
		disemptya.c \
		cisemptya.c \
		zisemptya.c

HEAD	=	../includes/isempty.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testIsEmpty

TESTS		=	testIsEmpty

#
# -*- Isempty Tests -*-
#
testIsEmpty_SOURCES	= 	testIsEmpty.c
testIsEmpty_CFLAGS	=	$(check_INCLUDES)
testIsEmpty_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
				$(top_builddir)/lib/libFloatComplex.a \
				$(top_builddir)/lib/libIsempty.a \
				$(top_builddir)/lib/libFind.a \
				@LIBMATH@
