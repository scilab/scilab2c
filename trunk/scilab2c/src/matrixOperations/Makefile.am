##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libMatrixOperations_la_CFLAGS =	-I ../type \
				-I .

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixOperations.la

libMatrixOperations_la_SOURCES = $(ADDITIONHEAD) $(ADDITIONSRC) \
				$(SUBTRACTIONHEAD) $(SUNTRACTIONSRC) #\
				#$(MULTIPLICATIONHEAD) $(MULTIPLICATIONSRC) #\
				#$(DIVISIONHEAD) $(DIVISIONSRC)

check_PROGRAMS = 	testMatrixAddition \
			testMatrixMultiplication \
			testMatrixDivision \
			testMatrixSubtraction

testMatrixAddition_SOURCES = testMatrixAddition.c
testMatrixAddition_LDADD = libMatrixOperations.la

testMatrixMultiplication_SOURCES = testMatrixMultiplication.c
testMatrixMultiplication_LDADD = libMatrixOperations.la

testMatrixDivision_SOURCES = testMatrixAddition.c
testMatrixDivision_LDADD = libMatrixOperations.la

testMatrixSubtraction_SOURCES = testMatrixSubtraction.c
testMatrixSubtraction_LDADD = libMatrixOperations.la


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
