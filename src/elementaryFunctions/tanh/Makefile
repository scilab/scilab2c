##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Mon Jan 29 16:46:38 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libTanh.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	stanhs.c \
		dtanhs.c \
		ctanhs.c \
		ztanhs.c \
		stanha.c \
		dtanha.c \
		ctanha.c \
		ztanha.c

HEAD	=	tanh.h
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
