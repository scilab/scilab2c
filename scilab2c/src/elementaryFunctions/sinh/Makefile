##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Wed Jan 31 11:59:02 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libSinh.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	ssinhs.c \
		dsinhs.c \
		csinhs.c \
		zsinhs.c \
		ssinha.c \
		dsinha.c \
		csinha.c \
		zsinha.c

HEAD	=	sinh.h
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
