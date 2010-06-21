/*
*  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
*  Copyright (C) 2009 - DIGITEO - Allan CORNET
*
*  This file must be used under the terms of the CeCILL.
*  This source file is licensed as described in the file COPYING, which
*  you should have received as part of this distribution.  The terms
*  are also available at
*  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
*
*/

#ifndef __DYNLIB_STATISTICSFUNCTIONS_H__
#define __DYNLIB_STATISTICSFUNCTIONS_H__

#if defined(_MSC_VER) && defined(_USRDLL)
	#if STATISTICSFUNCTIONS_EXPORTS
		#define EXTERN_STATFUNC __declspec (dllexport)
	#else
		#define EXTERN_STATFUNC __declspec (dllimport)
	#endif
#else
	#define EXTERN_STATFUNC 
#endif

#endif /* __DYNLIB_STATISTICSFUNCTIONS_H__ */
