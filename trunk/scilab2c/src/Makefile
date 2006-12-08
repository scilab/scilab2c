##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Fri Dec  8 17:01:06 2006 jofret
##
## Copyright INRIA 2006
##

DIRS	=	type \
		elementaryFunctions \
		test

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

test: all
	@cd test && make $@; cd ..

todo:
	@grep -R FIXME --exclude="*svn*" * > TODO
	@cat TODO