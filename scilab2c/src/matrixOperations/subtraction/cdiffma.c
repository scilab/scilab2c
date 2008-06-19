/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "matrixSubtraction.h"

/*
** \brief Compute an substraction element ways for complex single precision.
** \param in1 : input array.
** \param size1 : size of in1 array.
** \param in2 : input arry.
** \param size2 : size of in2 array.
** \param out : array that contains in1 - in2.
*/
void	cdiffma(floatComplex *in1, int size1,
	       floatComplex *in2, int size2,
	       floatComplex *out)
{
  int i = 0;

  for(i = 0 ; i < size1 && i < size2 ; ++i)
    {
      out[i] = cdiffs(in1[i], in2[i]);
    }
}
