##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Sep  6 16:21:13 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libLog10.a

noinst_LIBRARIES =	libLog10.a

libLog10_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	slog10s.c \
		dlog10s.c \
		clog10s.c \
		zlog10s.c \
		slog10a.c \
		dlog10a.c \
		clog10a.c \
		zlog10a.c

HEAD	=	../includes/log10.h
