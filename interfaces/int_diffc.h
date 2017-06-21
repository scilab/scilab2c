 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __INT_DIFFC_H__
#define __INT_DIFFC_H__

#ifdef  __cplusplus
extern "C" {
#endif

#define d2diffd2(in, size, out) ddiffca(in, size[0], size[1], 1, 0, out)

#define d2d0diffd2(in, size, depth, out) ddiffca (in, size[0], size[1], \
					depth, 0, out)

#define d2d0d0diffd2(in, size, depth, dim, out) ddiffca(in, size[0], size[1], \
					depth, dim, out)

#define s2diffs2(in, size, out) sdiffca(in, size[0], size[1], 1, 0, out)

#define s2d0diffs2(in, size, depth, out) sdiffca (in, size[0], size[1], \
					depth, 0, out)

#define s2s0diffs2(in, size, depth, out) sdiffca (in, size[0], size[1], \
					depth, 0, out)

#define s2s0d0diffs2(in, size, depth, dim, out) sdiffca(in, size[0], size[1], \
					depth, dim, out)

#define s2d0d0diffs2(in, size, depth, dim, out) sdiffca(in, size[0], size[1], \
					depth, dim, out)
 
#define u82diffu82(in, size, out) u8diffca(in, size[0], size[1], 1, 0, out)

#define u82d0diffu82(in, size, depth, out) u8diffca (in, size[0], size[1], \
					depth, 0, out)

#define u82u80diffu82(in, size, depth, out) u8diffca (in, size[0], size[1], \
					depth, 0, out)

#define u82u80d0diffu82(in, size, depth, dim, out) u8diffca(in, size[0], size[1], \
					depth, dim, out)


#define u82d0d0diffu82(in, size, depth, dim, out) u8diffca(in, size[0], size[1], \
					depth, dim, out)

#define i82diffi82(in, size, out) i8diffca(in, size[0], size[1], 1, 0, out)

#define i82d0diffi82(in, size, depth, out) i8diffca (in, size[0], size[1], \
					depth, 0, out)

#define i82u80diffi82(in, size, depth, out) i8diffca (in, size[0], size[1], \
					depth, 0, out)

#define i82u80d0diffi82(in, size, depth, dim, out) i8diffca(in, size[0], size[1], \
					depth, dim, out)


#define i82d0d0diffi82(in, size, depth, dim, out) i8diffca(in, size[0], size[1], \
					depth, dim, out)

#define u162diffu162(in, size, out) u16diffca(in, size[0], size[1], 1, 0, out)

#define u162d0diffu162(in, size, depth, out) u16diffca (in, size[0], size[1], \
					depth, 0, out)

#define u162u160diffu162(in, size, depth, out) u16diffca (in, size[0], size[1], \
					depth, 0, out)

#define u162u160d0diffu162(in, size, depth, dim, out) u16diffca(in, size[0], size[1], \
					depth, dim, out)


#define u162d0d0diffu162(in, size, depth, dim, out) u16diffca(in, size[0], size[1], \
					depth, dim, out)

#define i162diffi162(in, size, out) i16diffca(in, size[0], size[1], 1, 0, out)

#define i162d0diffi162(in, size, depth, out) i16diffca (in, size[0], size[1], \
					depth, 0, out)

#define i162u160diffi162(in, size, depth, out) i16diffca (in, size[0], size[1], \
					depth, 0, out)

#define i162u160d0diffi162(in, size, depth, dim, out) i16diffca(in, size[0], size[1], \
					depth, dim, out)


#define i162d0d0diffi162(in, size, depth, dim, out) i16diffca(in, size[0], size[1], \
					depth, dim, out)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_DIFFC_H__*/
