##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 20:57:17 2007 bruno
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
