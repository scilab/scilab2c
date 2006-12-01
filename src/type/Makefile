##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Dec  1 16:21:12 2006 jofret
##
## Copyright INRIA 2006
##

NAME	=	complex
RM	=	rm -f
CC	=	gcc
CFLAGS	=	-Wall -pedantic -ansi
AR	=	ar cru
RANLIB	=	ranlib

OBJS	=	$(DCOBJ) $(FCOBJ)
LIBS	=	$(DCLIB) $(FCLIB)

### test


### Double Complex
DCLIB	=	libDoubleComplex.a
DCSRC	=	doubleComplex.c
DCHEAD	=	doubleComplex.h
DCOBJ	=	$(DCSRC:.c=.o)

### Float Complex
FCLIB	=	libFloatComplex.a
FCSRC	=	floatComplex.c
FCHEAD	=	floatComplex.h
FCOBJ	=	$(FCSRC:.c=.o)


all: $(LIBS)

$(DCLIB) : $(DCOBJ)
	$(AR) $@ $<
	$(RANLIB) $@

$(FCLIB) : $(FCOBJ)
	$(AR) $@ $<
	$(RANLIB) $@

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) $(NAME) $(LIBS)

test: $(NAME)

