##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Thu Dec  7 16:14:26 2006 jofret
##
## Copyright INRIA 2006
##

DIRS	=	type \
		elementaryFunctions

all: recure

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

todo:
	@grep -R FIXME * > TODO
	@cat TODO