##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Jan 31 11:59:19 2007 jofret
##
## Copyright INRIA 2007
##

NAME	=	../../lib/libAcos.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK) $(STANDARD)
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

HEAD	=	acos.h
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
