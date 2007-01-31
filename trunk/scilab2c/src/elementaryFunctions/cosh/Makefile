##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Wed Jan 31 11:59:11 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libCosh.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	scoshs.c \
		dcoshs.c \
		ccoshs.c \
		zcoshs.c \
		scosha.c \
		dcosha.c \
		ccosha.c \
		zcosha.c

HEAD	=	cosh.h
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(HEAD) $(OBJ)
	$(AR) $@ $(OBJ)
	$(RANLIB) $@

clean:
	$(RM) $(OBJ)

distclean: clean
	$(RM) $(NAME)

re: clean all
