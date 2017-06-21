# SCI2C Makefile
# hArtes EU Project.
# Authors: PoliBa & Inria
# -----------------------
# --- USER PARAMETERS ---
# -----------------------
# --- DIRECTORIES AND FILES ---
CSRCDIR     = src/c
HSRCDIR     = includes
ISRCDIR     = interfaces
LIBDIR     = libraries
SCI2CDIR    = .
CC     = gcc
CXX     = g++
CFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR) -L $(LIBDIR)
CXXFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR) -L $(LIBDIR)
LDFLAGS = -lblas -llapack -lm 
EXEFILENAME = lengthfinder
EXEFILE = $(SCI2CDIR)/$(EXEFILENAME)
SRC = $(wildcard $(CSRCDIR)/*.c)
SRCC = $(wildcard $(CSRCDIR)/*.cpp)
OBJ = $(SRC:.c=.o)
OBJC = $(SRCC:.cpp=.o)
# ---------------
# --- TARGETS ---
# ---------------
compileexecute: $(OBJ) $(OBJC)
	@echo " "
	@echo "============================"
	@echo "Generation of the executable"
	@echo "============================"
	$(CXX) $(CFLAGS) $(OBJ) $(OBJC) *.c $(LDFLAGS) -o $(EXEFILE)
	@echo " "
	@echo "=============="
	@echo "Executing code"
	@echo "=============="
	$(EXEFILE)
clean:
	@echo " "
	@echo "============================="
	@echo "Removing only exe + obj files"
	@echo "============================="
	rm -rf $(EXEFILE)
	rm -rf $(OBJ)
	rm -rf $(OBJC)
	@echo " "
distclean: clean
	@echo " "
	@echo "=========================="
	@echo "Removing only the exe file"
	@echo "=========================="
	rm -rf $(EXEFILE)
	@echo " "
