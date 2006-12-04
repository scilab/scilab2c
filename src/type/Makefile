##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Mon Dec  4 17:24:37 2006 jofret
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

$(DCLIB) : $(DCHEAD) $(DCOBJ)
	$(AR) $@ $<
	$(RANLIB) $@

$(FCLIB) : $(FCHEAD) $(FCOBJ)
	$(AR) $@ $<
	$(RANLIB) $@

$(FCSRC) : $(DCSRC)
	@echo "--> Generating $@ from $<"
	@cat $< | sed s/double/float/g | sed s/Double/Float/g > $@

$(FCHEAD) : $(DCHEAD)
	@echo "--> Generating $@ from $<"
	@cat $< | sed s/double/float/g | sed s/Double/Float/g > $@

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) $(NAME) $(LIBS) $(FCSRC) $(FCHEAD)


