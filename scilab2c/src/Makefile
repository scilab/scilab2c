##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Wed Jan 31 12:04:05 2007 jofret
##
## Copyright INRIA 2006
##

DIRS	=	type \
		elementaryFunctions \
		test

all: recure

stdc99:
	@for i in $(DIRS); \
	do cd $$i && make STANDARD=-std=c99; \
	cd .. ;\
	done

recure:
	@for i in $(DIRS); \
	do cd $$i && make; \
	cd .. ;\
	done

clean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	cd .. ;\
	done

distclean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	cd .. ;\
	done

re: clean all

test: all
	@cd test && make $@; cd ..

todo:
	@grep -R FIXME --exclude="*svn*" --exclude="Makefile" * > TODO
	@cat TODO

