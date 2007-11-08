##
##  -*- makefile -*-
##
## Makefile.am
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Thu Nov  8 17:05:08 2007 bruno
##
## Copyright INRIA 2006
##

instdir = $(top_builddir)/lib

inst_LIBRARIES = libMatrixOperations.a

noinst_LIBRARIES = libMatrixOperations.a

libMatrixOperations_a_SOURCES = $(ADDITIONHEAD) $(ADDITIONSRC) \
				$(SUBTRACTIONHEAD) $(SUNTRACTIONSRC) \
				$(MULTIPLICATIONHEAD) $(MULTIPLICATIONSRC) \
				$(DIVISIONHEAD) $(DIVISIONSRC)

check_PROGRAMS = 	testMatrixAddition \
			testMatrixMultiplication \
			testMatrixDivision \
			testMatrixSubtraction

testMatrixAddition_SOURCES = testMatrixAddition.c
testMatrixAddition_LDADD = libMatrixOperations.a

testMatrixMultiplication_SOURCES = testMatrixMultiplication.c
testMatrixMultiplication_LDADD = libMatrixOperations.a

testMatrixDivision_SOURCES = testMatrixAddition.c
testMatrixDivision_LDADD = libMatrixOperations.a

testMatrixSubtraction_SOURCES = testMatrixSubtraction.c
testMatrixSubtraction_LDADD = libMatrixOperations.a


TESTS =  	testMatrixAddition \
		testMatrixMultiplication \
		testMatrixDivision \
		testMatrixSubtraction


ADDITIONHEAD = matrixAddition.h

ADDITIONSRC = matrixAddition.c

SUBTRACTIONHEAD = matrixSubtraction.h

SUNTRACTIONSRC = matrixSubtraction.c

MULTIPLICATIONHEAD = matrixMultiplication.h

MULTIPLICATIONSRC = matrixMultiplication.c

DIVISIONHEAD = matrixDivision.h

DIVISIONSRC = matrixDivision.c
