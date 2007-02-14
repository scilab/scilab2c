##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Wed Feb 14 14:38:13 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libIsEmpty.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../../type -I ../../misc
LINK	=	-L ../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi $(INCLUDE) $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	sisEmptya.c \
		disEmptya.c \
		cisEmptya.c \
		zisEmptya.c

HEAD	=	isEmpty.h
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
