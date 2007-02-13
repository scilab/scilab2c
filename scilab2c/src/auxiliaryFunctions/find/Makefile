##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Tue Feb 13 15:54:45 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libFind.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	sfinda.c \
		dfinda.c \
		cfinda.c \
		zfinda.c

HEAD	=	find.h
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
