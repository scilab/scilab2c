##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 21:01:56 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAsin.a

noinst_LIBRARIES =	libAsin.a

libAsin_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sasins.c \
		dasins.c \
		casins.c \
		zasins.c \
		sasina.c \
		dasina.c \
		casina.c \
		zasina.c

HEAD	=	../includes/asin.h
