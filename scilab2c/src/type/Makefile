##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Thu Dec  7 10:53:28 2006 jofret
##
## Copyright INRIA 2006
##

RM	=	rm -f
CC	=	gcc
CFLAGS	=	-Wall -pedantic -ansi
AR	=	ar cru
RANLIB	=	ranlib

OBJS	=	$(DCOBJ) $(FCOBJ)
LIBS	=	$(DCLIB) $(FCLIB)

### test


### Double Complex
DCLIB	=	../lib/libDoubleComplex.a
DCSRC	=	doubleComplex.c
DCHEAD	=	doubleComplex.h
DCOBJ	=	$(DCSRC:.c=.o)

### Float Complex
FCLIB	=	../lib/libFloatComplex.a
FCSRC	=	floatComplex.c
FCHEAD	=	floatComplex.h
FCOBJ	=	$(FCSRC:.c=.o)


all: $(LIBS)

$(DCLIB) : $(DCHEAD) $(DCOBJ)
	$(AR) $@ $(DCOBJ)
	$(RANLIB) $@

$(FCLIB) : $(FCHEAD) $(FCOBJ)
	$(AR) $@ $(FCOBJ)
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


