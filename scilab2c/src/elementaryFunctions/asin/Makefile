##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Feb 23 16:40:50 2007 jofret
##
## Copyright INRIA 2007
##

NAME	=	../../lib/libAsin.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../../type -I ../includes
LINK	=	-L ../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi $(INCLUDE) $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	sasins.c \
		dasins.c \
		casins.c \
		zasins.c \
		sasina.c \
		dasina.c \
		casina.c \
		zasina.c

HEAD	=	../includes/asin.h
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
