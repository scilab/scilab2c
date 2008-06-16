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

libMatrixOperations_la_CFLAGS =	-I  $(top_builddir)/type \
				-I .

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libMatrixOperations.la

libMatrixOperations_la_SOURCES = $(ADDITIONHEAD) $(ADDITIONSRC) \
				$(SUBTRACTIONHEAD) $(SUBTRACTIONSRC) \
				$(MULTIPLICATIONHEAD) $(MULTIPLICATIONSRC) #\
				#$(DIVISIONHEAD) $(DIVISIONSRC)

check_PROGRAMS = 	testMatrixAddition \
			testMatrixSubtraction \
			testMatrixMultiplication #\
			#testMatrixDivision

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			libMatrixOperations.la

check_INCLUDES =	-I  $(top_builddir)/type \
			-I .

testMatrixAddition_SOURCES = testMatrixAddition.c
testMatrixAddition_LDADD = $(check_LDADD)
testMatrixAddition_CFLAGS = $(check_INCLUDES)

testMatrixSubtraction_SOURCES = testMatrixSubtraction.c
testMatrixSubtraction_LDADD = $(check_LDADD)
testMatrixSubtraction_CFLAGS = $(check_INCLUDES)

testMatrixMultiplication_SOURCES = testFloatMatrixMultiplication.c testDoubleMatrixMultiplication.c
testMatrixMultiplication_LDADD = $(check_LDADD)
testMatrixMultiplication_CFLAGS = $(check_INCLUDES)

#testMatrixDivision_SOURCES = testMatrixAddition.c
#testMatrixDivision_LDADD = libMatrixOperations.la


TESTS =  	testMatrixAddition \
		testMatrixSubtraction \
		testMatrixMultiplication #\
		#testMatrixDivision


ADDITIONHEAD = matrixAddition.h
ADDITIONSRC = matrixAddition.c

SUBTRACTIONHEAD = matrixSubtraction.h
SUBTRACTIONSRC = matrixSubtraction.c

MULTIPLICATIONHEAD = matrixMultiplication.h
MULTIPLICATIONSRC = matrixMultiplication.c

#DIVISIONHEAD = matrixDivision.h
#DIVISIONSRC = matrixDivision.c
