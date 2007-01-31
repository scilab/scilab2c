##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Wed Jan 31 11:59:06 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libExp.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	sexps.c \
		dexps.c \
		cexps.c \
		zexps.c \
		sexpa.c \
		dexpa.c \
		cexpa.c \
		zexpa.c

HEAD	=	exp.h
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
