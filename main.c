/*
** ************************************************
** This file has been generated using
**      Scilab2C (Version 2.3)
**
** Please visit following links for more informations:
** Atoms Module: http://atoms.scilab.org/toolboxes/scilab2c
** Scilab2C Forge: http://forge.scilab.org/index.php/p/scilab2c/
** Scilab2C ML: http://forge.scilab.org/index.php/p/scilab2c/
** ************************************************
*/
 
 
/*
** ----------------- 
** --- Includes. --- 
** ----------------- 
*/
#include "main.h"
/*
** --------------------- 
** --- End Includes. --- 
** --------------------- 
*/
 
 
 
/*
** -------------------------------------
** --- Global Variables Declaration. ---
** -------------------------------------
*/
 
 
/*
** -----------------------------------------
** --- End Global Variables Declaration. ---
** -----------------------------------------
*/
 
/*
  SCI2C: ------------------------------------------------------------------
  SCI2C: function lengthfinder()
  SCI2C: ------------------------------------------------------------------
*/
int main()
{
/*
** -----------------------------
** --- Variable Declaration. ---
** -----------------------------
*/
 
   double x[1 * 5];
   int __xSize[2] = {1, 5};;
 
   double y;
 
   double ans1;
 
 
 
 
/*
** ---------------------------------
** --- End Variable Declaration. ---
** ---------------------------------
*/
/*
** ---------------
** --- C code. ---
** ---------------
*/
 
   d0d0OpColond2(1,5,x);
 
   y = d2lengthd0(x,  __xSize);
 
   d0disp(y);
 
 
 
   /*
   ** --------------------- 
   ** --- Free Section. --- 
   ** --------------------- 
   */
   /*
   ** ------------------------- 
   ** --- End Free Section. --- 
   ** ------------------------- 
   */
 
   return(0);
 
}
 
