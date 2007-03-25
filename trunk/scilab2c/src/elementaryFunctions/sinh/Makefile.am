##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 20:57:46 2007 bruno
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
