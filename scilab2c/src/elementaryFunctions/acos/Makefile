##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Feb 23 16:38:02 2007 jofret
##
## Copyright INRIA 2007
##

NAME	=	../../lib/libAcos.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../../type -I ../includes
LINK	=	-L ../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi $(INCLUDE) $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	sacoss.c \
		dacoss.c \
		cacoss.c \
		zacoss.c \
		sacosa.c \
		dacosa.c \
		cacosa.c \
		zacosa.c

HEAD	=	../includes/acos.h
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
